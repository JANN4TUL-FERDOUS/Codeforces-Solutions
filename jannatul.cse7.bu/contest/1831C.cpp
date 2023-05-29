#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define  pb push_back
const int N=3e5+3;
vector<pair<ll,ll>>g[N];
bitset<N>bt;
ll lev[N],s;
void dfs(ll i,ll ind,ll res){
	bt[i]=1;
	s=max(s,res);
	for(auto j:g[i]){
		if(bt[j.ss]) continue;
		//cout<<j.ff<<" "<<j.ss<<" "<<bt[j.ss]<<" "<<res<<endl;
		if(j.first<ind) dfs(j.ss,j.ff,res+1);
		else dfs(j.ss,j.ff,res);
	}
	return;
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	int l=t;
	while(t--){
		//cout<<"Case "<<l-t<<": ";
		ll n,i,j,k,s2=0;
		cin>>n;
		for(i=0;i<n-1;i++){
			ll u,v;
			cin>>u>>v;
			g[u].pb({i,v});
			g[v].pb({i,u});		
		}
		s=0;
		dfs(1,0,0);
		cout<<s+1<<"\n";
		for(i=1;i<=n;i++){
			bt[i]=0;
			g[i].clear();
		}
	}
	return 0;
}