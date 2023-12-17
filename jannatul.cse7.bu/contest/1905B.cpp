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
ll ans=0,lev[N];
void dfs(ll i,ll lv){
	bt[i]=1;
	ans=max((lev[lv]+1)/2,ans);
	for(ll j:g[i]){
		if(bt[j]) continue;
		dfs(j,lv+1);
		lev[i]++;
		
	}
	
	if(lev[i]==0) {
		ans++;
		cout<<i<<" "<<lev[i]<<endl;
	}
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
   	ll t=1;
   	cin>>t;
   	while(t--){
   		ll i,j,n,k,s=0,m;
   		cin>>n;
   		ans=0;
   		for(i=0;i<n-1;i++){
   			ll u,v;
   			cin>>u>>v;
   			g[u].pb(v);
   			g[v].pb(u);
   		}
   		for(i=0;i<=n;i++){
   			if((int)g[i].size()==1) ans++;
   		}
   		//dfs(1,0);	
   		cout<<(ans+1)/2<<"\n";
   		for(i=0;i<=n;i++){
   			bt[i]=0;
   			g[i].clear();
   			lev[i]=0;
   		}	
   			
	}
	return 0;
}