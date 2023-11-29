#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ff first
#define ss second
#define pb push_back
 
const int N=5e5+7;
ll mod=998244353;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
ll fact[N];

ll bigmod(ll x,ll p){
	if(p==0) return 1ll;
	if(p==1) return x;
	if(p%2) return ((bigmod(x,p-1)%mod)*(x%mod))%mod;
	else{
		ll res=bigmod(x,p/2);
		return ((res%mod)*(res%mod))%mod;
	}
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;
    ll tt=t;
    fact[0]=1;
    for(ll i=1;i<N;i++){
    	fact[i]=fact[i-1]*i;
    	fact[i]%=mod;
    }
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,j,k,s=0;
		cin>>n>>m;
		if(n<m) {cout<<"0\n";continue;}
		if(m==1) {cout<<n<<"\n";continue;}
		ll dv,ans=0;
		for(i=1;i<=n;i++){
			ll x=n/i;
			if(x<m) break;
			dv=fact[m-1]*fact[x-m]%mod;
			ll ans2=(fact[x-1]*bigmod(dv,mod-2))%mod;
			ans=(ans+ans2)%mod;
		}
		cout<<ans<<"\n";
	}
	return 0;
}