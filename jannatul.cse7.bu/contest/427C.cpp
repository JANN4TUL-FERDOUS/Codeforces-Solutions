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
 
vector<ll>g[N],rev[N];
bitset<N>bt;
ll a[N],mx=0,mn=1e12;
vector<ll>order,elm;
void dfs(ll i){
	bt[i]=1;
	for(ll j:g[i]){
		if(bt[j]==0) dfs(j);
	}
	order.pb(i);
}
void dfs2(ll i){
	if(mn>a[i]){
		mn=a[i];
		mx=1;
	}
	else if(mn==a[i]) mx++;
	//ele.pb(i);
	bt[i]=1;
	for(ll j:rev[i]){
		if(bt[j]==0) dfs2(j);
	}
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;
    ll tt=t;
    while(t--){
		ll n,m,k,i,j=0,s=0,s2=0;
		cin>>n;
		for(i=1;i<=n;i++)cin>>a[i];
		cin>>m;
		for(i=0;i<m;i++){
			ll u,v;
			cin>>u>>v;
			g[u].pb(v);
			rev[v].pb(u);
		}
		for(i=1;i<=n;i++){
			if(bt[i]==0) dfs(i);
		}
		ll ans=1,cost=0;
		for(i=1;i<=n;i++) bt[i]=0;
		reverse(order.begin(),order.end());
		for(ll i:order){
			if(bt[i]==0){
				//elm.clear();
				mx=0,mn=1e12;
				dfs2(i);
				ans=(ans*mx)%mod;
				cost+=mn;
			}
		}
		cout<<cost<<" "<<ans<<"\n";
		for(i=0;i<=n;i++){
			g[i].clear();
			bt[i]=0;
		}
		order.clear();
	}
	return 0;
}