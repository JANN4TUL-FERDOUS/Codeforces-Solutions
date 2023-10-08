#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=2e6+7;
ll mod=998244353;
int ax[8]={0,0,-1,+1,-1,-1,1,1};
int ay[8]={-1,1,0,0,-1,1,-1,1};
int kx[8]={2,2,-2,-2,1,1,-1,-1};
int ky[8]={1,-1,1,-1,2,-2,2,-2};
//const ll len=180;
//vector<ll>g[N];
ll f[N],g[N];
 
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,i,j,s=0,s2=0,z=1,z2=0,x=0;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++){cin>>f[a[i]];}
		cin>>m;ll b[m];
		for(i=0;i<m;i++) cin>>b[i];
		for(i=0;i<m;i++){cin>>g[b[i]];}
		ll ans=1;
		for(i=1;i<=N;i++){
			if(g[i]>f[i]) ans=0;
			if(g[i]<f[i]) ans=(ans*2)%mod;
		}
		cout<<ans<<"\n";
	}
	return 0;
}