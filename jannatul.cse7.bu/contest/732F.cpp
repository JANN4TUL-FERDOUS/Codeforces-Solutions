#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=1e6+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

bitset<N>bt;
bitset<N>bt2;
ll low[N],tim[N],bridge,cnt,root,timer,m;
vector<ll>g[N];
map<pair<ll,ll>,ll>mp;
vector<pair<ll,ll>>vec;
pair<ll,ll>pr[N];
stack<ll>st;
void dfs(ll i,ll prev){
	bt[i]=1;
	tim[i]=timer++;low[i]=tim[i];
	//cout<<i<<" ";
	st.push(i);
	for(ll j:g[i]){
		if(j==prev) continue;
		if(bt[j]) low[i]=min(low[i],tim[j]);
		else{
			dfs(j,i);
			low[i]=min(low[i],low[j]);
		}		
	}	
	//cout<<i<<" "<<tim[i]<<" "<<low[i]<<endl;
	if(low[i]==tim[i]){//bridge
		ll num=0;
		//cout<<"bridge "<<i<<"\n";
		while(1){
			ll x=st.top();
			st.pop();
		//	cout<<x<<" ";
			num++;
			if(x==i) break;
		}
		if(num>cnt){
			cnt=num;
			root=i;
			//cout<<"root "<<cnt<<" "<<i<<" "<<num<<endl;
		}
		
	}
}
void dfs2(ll i){
	bt2[i]=1;
	//cout<<"index "<<i<<" ";
	for(ll j:g[i]){
		if(mp[{j,i}]<m) {
			vec[mp[{j,i}]]={j,i};
			mp[{j,i}]=m;mp[{i,j}]=m;
		}
		if(bt2[j]==0) dfs2(j);
	}
}

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t=1;
  	//cin>>t;
  	int l=t;
  	while(t--){
  		ll n,i,j,k=0,len,s=0;
  		cin>>n>>m;
  		for(i=0;i<m;i++){
  			ll u,v;
  			cin>>u>>v;
  			vec.pb({u,v});
  			
			g[u].pb(v);g[v].pb(u);
			mp[{u,v}]=mp[{v,u}]=i;
		}
		dfs(1,0);
		dfs2(root);
		cout<<cnt<<"\n";
		for(auto i:vec){
			cout<<i.ff<<" "<<i.ss<<endl;
		}
	}
	return 0;
}