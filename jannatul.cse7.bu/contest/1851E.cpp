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
ll arr[N],ans[N],cost[N];
vector<ll>g[N];

void dfs(ll i){
	ll s=0;
	bt[i]=1;
	for(ll j:g[i]){
		//cout<<i<<" "<<j<<" "<<bt[j]<<" "<<g[i].size()<<endl;
		if(bt[j]==0) dfs(j);
		if(s<arr[i]) s+=ans[j];
	}
	ans[i]=min(s,arr[i]);
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,h,i,j,k,z=0,temp=0,res=0;
    	cin>>n>>k;
    	for(i=1;i<=n;i++){
    		cin>>arr[i];
    		g[i].clear();
    		bt[i]=0;ans[i]=0;
    	}
    	for(i=0;i<k;i++){
    		cin>>z;
    		bt[z]=1;
    		arr[z]=0;

    	}
    	for(i=1;i<=n;i++){
    		ll m,x;
    		cin>>m;
    		if(m==0) {ans[i]=arr[i];bt[i]=1;continue;}
    		for(j=0;j<m;j++){
    			cin>>x;
    			g[i].pb(x);
    		}
    	}
    	for(i=1;i<=n;i++){
    		if(bt[i]==0) {dfs(i);}
    		cout<<ans[i]<<" ";
    	}
    	cout<<"\n";
    }
    return 0;
}