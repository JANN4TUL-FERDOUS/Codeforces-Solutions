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
		ll n,m,k,i,j=0,s=0,s2=0;
		cin>>n>>k;
		ll a[n+1],b[n+1],c[n+1],d[n+1];
		for(i=0;i<=n+1;i++){
			b[i]=1e12;
			c[i]=1e12;
			d[i]=1e12;
		}
		for(i=0;i<k;i++) cin>>a[i];
		for(i=0;i<k;i++) cin>>b[a[i]];
		for(i=1;i<=n;i++) c[i]=min(c[i-1]+1,b[i]);
		for(i=n;i>=0;i--) d[i]=min(d[i+1]+1,b[i]);
		for(i=1;i<=n;i++){
			cout<<min(c[i],d[i])<<" ";
		}
		cout<<endl;
	}
	return 0;
}