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
vector<ll>g[N];
ll leaf[N];

void dfs(ll i){
	bt[i]=1;
	if(g[i].size()==1 && i>1){leaf[i]=1;};
	for(ll j:g[i]){
		if(bt[j]==1) continue;
		dfs(j);
		leaf[i]+=leaf[j];
	}
} 
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll i,j,s=0,s2=0,z=0,k,num=0;
    	ll n;
    	cin>>n;
    	for(i=1;i<n;i++){
    		ll u,v;
			cin>>u>>v;
			g[u].pb(v);
			g[v].pb(u);
    	}
    	dfs(1);
    	ll q;
    	cin>>q;
    	while(q--){
    		ll x,y;
    		cin>>x>>y;
    		//cout<<x<<" "<<y<<" "<<leaf[x]<<" "<<leaf[y]<<endl;
    		cout<<leaf[x]*leaf[y]<<"\n";
    	}
    	for(i=1;i<=n;i++){
    		bt[i]=0;leaf[i]=0;
    		g[i].clear();
    	}
    	
	}
	return 0;
}