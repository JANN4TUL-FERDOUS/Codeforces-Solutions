#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=1e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,i,j,s=0,s2=0,z=0;
		cin>>n>>m;
		ll a[n],b[m];
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<m;i++){
			cin>>z;
			s|=z;
		}
		z=s;
		s=0;
		for(i=0;i<n;i++){
			s2^=a[i];
			s^=(a[i]|z);
		}
		if(s2<s) swap(s,s2);
		cout<<s<<" "<<s2<<"\n";
	}
	return 0;
}