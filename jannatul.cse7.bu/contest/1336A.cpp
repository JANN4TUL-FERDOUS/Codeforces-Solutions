#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=2e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
ll arr[N];
vector<ll>g[N];
ll ans=0,resl,len[N],dept[N];
pair<pair<ll,ll>,ll>v[N];
vector<ll>vec[N];
map<ll,ll>mp;
void dfs(ll i,ll val){
	bt[i]=1;
	len[i]=1;
	dept[i]=val+1;
	for(ll j:g[i]){
		if(bt[j]==1) continue;
		dfs(j,val+1);
		len[i]+=len[j];
	}
	arr[i]=dept[i]-len[i];
}


int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    while(t--){
    	ll n,i,j,k,z=0;
    	cin>>n>>k;
    	for(i=0;i<n-1;i++){
    		ll u,v;
    		cin>>u>>v;
    		g[u].pb(v);
    		g[v].pb(u);
    	}
    	dfs(1,0);
    	sort(arr+1,arr+n+1,greater<>());
    	ans=0;
    	for(i=1;i<=k;i++){
    		//cout<<i<<" "<<arr[i]<<"\n";
    		ans+=arr[i];
    		//mp[v[i].ss]=1;
    	}
        cout<<ans<<endl;
    	
    }
    return 0;
}