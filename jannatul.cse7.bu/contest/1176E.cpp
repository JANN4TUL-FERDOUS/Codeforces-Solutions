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
vector<ll>g[N];
bitset<N>bt;
vector<ll>odd,even;
void dfs(ll i,ll pr){
	bt[i]=1;
	if(pr%2) odd.pb(i);
	else even.pb(i);
	for(ll j:g[i]){
		if(bt[j]) continue;
		dfs(j,pr^1);
	}
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
   	ll t=1;
   	cin>>t;
   	while(t--){
   		ll n,i,j,k,s=0,m;
   		cin>>n>>m;
   		odd.clear();even.clear();
   		for(i=0;i<m;i++){
   			ll u,v;
   			cin>>u>>v;
   			g[u].pb(v);
   			g[v].pb(u);
   		}
   		dfs(1,0);
   		if(odd.size()<even.size()){
   			cout<<odd.size()<<"\n";
   			for(ll i:odd) cout<<i<<" ";
   			cout<<"\n";
   		}else{
   			cout<<even.size()<<"\n";;
   			for(ll i:even) cout<<i<<" ";
   			cout<<"\n";
   		}
   		for(i=1;i<=n;i++){
   			bt[i]=0;
   			g[i].clear();
   		}
	}
	return 0;
}