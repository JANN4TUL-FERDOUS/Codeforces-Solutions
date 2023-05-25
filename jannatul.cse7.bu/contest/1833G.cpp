#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define  pb push_back
const int N=2e5+7;
const ll mod=1e9+7;
vector<ll>g[N];
map<pair<ll,ll>,ll>mp;
vector<ll>vt;
bitset<N>bt;
ll len[N],s=0;
ll dfs(ll i){
	bt[i]=1;
	//cout<<i<<" ";
	for(auto j:g[i]){
		if(bt[j]) continue;
		ll x=dfs(j);
		if(x==3) vt.push_back(mp[{i,j}]);
		if(x!=3) len[i]+=x;
		//cout<<i<<" "<<j<<" "<<len[i]<<" "<<len[j]<<" "<<x<<endl;
	}
	len[i]++;
	return len[i];
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,i,j,k,s2=0;
		cin>>n;
		for(i=1;i<n;i++){
			ll u,v;
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
			mp[{u,v}]=i;
			mp[{v,u}]=i;
		}
		if(n%3) {cout<<"-1\n";}
		else{
			s=0;
			if(dfs(1)==3) {
				cout<<vt.size()<<endl;
				for(i=0;i<(int)vt.size();i++) cout<<vt[i]<<" ";
				cout<<endl;
			}
			else cout<<"-1\n";
		}
		vt.clear();
		for(i=0;i<n+3;i++) {bt[i]=0;len[i]=0;g[i].clear();}
	}
	return 0;
}