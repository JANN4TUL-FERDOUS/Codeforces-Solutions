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
bitset<N>bt;
ll arr[N];
vector<ll>g[N];
ll ans=0,res;

ll dfs(ll i,ll prev){
	ll temp=arr[i];
	for(ll j:g[i]){
		if(j==prev) continue;
		ll x=dfs(j,i);
		if(x==res) ans++;
		else temp^=x;
	}
	return temp;
}

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,k;
    	ans=0;res=0;
    	cin>>n>>k;
    	for(i=1;i<=n;i++){
    		cin>>arr[i];
    		res^=arr[i];
    		g[i].clear();
    	}
    	for(i=1;i<n;i++){
    		ll u,v;
    		cin>>u>>v;
    		g[u].pb(v);
    		g[v].pb(u);
    	}
    	//cout<<res<<" ";
    	if(res==0) cout<<"YES\n";
    	else if(k>2){
    		ll x=dfs(1,0);
    		//cout<<ans<<" ";
    		if(ans>1) cout<<"YES\n";
    		else cout<<"NO\n";
    	}
    	else cout<<"NO\n";
    }
    return 0;
}