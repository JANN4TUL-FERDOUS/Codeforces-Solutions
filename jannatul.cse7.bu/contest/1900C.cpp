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

string a;
bitset<N>bt;
vector<ll>g[N];
ll ans[N];
void dfs(ll i){
	bt[i]=1;
	if(g[i][0]>0){
		ans[g[i][0]]=ans[i];
		if(a[i-1]!='L') ans[g[i][0]]++;
		dfs(g[i][0]);
	}
	if(g[i][1]>0){
		ans[g[i][1]]=ans[i];
		if(a[i-1]!='R') ans[g[i][1]]++;
		dfs(g[i][1]);
	}
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,j,k,s=0;
		cin>>n;
		cin>>a;
		vector<ll>v;
		for(i=1;i<=n;i++){
			ll x,y;
			cin>>x>>y;
			g[i].pb(x);
			g[i].pb(y);
			if(x==0 && y==0) v.pb(i);
			ans[i]=0;
		}
		dfs(1);
		ll res=1e15;
		//cout<<lft<<" "<<rght<<"\n";
		for(auto i:v){
			res=min(res,ans[i]);
		}
		cout<<res<<"\n";
		for(i=0;i<=n;i++) g[i].clear();
	}
	return 0;
}