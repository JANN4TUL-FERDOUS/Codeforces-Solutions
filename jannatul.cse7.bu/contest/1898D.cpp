#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=3e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k=0,i,j=1,s=0,s2=0;
		cin>>n;
		ll a[n],b[n];
		ll mx=0,mn=1e12;
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n;i++){
			cin>>b[i];
			s+=abs(a[i]-b[i]);
			mx=max(mx,min(a[i],b[i]));
			mn=min(mn,max(a[i],b[i]));
		}
		//cout<<s<<" ";
		if(mx>mn) s+=2*(mx-mn);
		cout<<s<<"\n";
	}
	return 0;
}