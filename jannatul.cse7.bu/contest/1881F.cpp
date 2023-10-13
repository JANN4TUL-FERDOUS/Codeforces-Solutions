#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=2e5+7;
ll mod=998244353;
int ax[8]={0,0,-1,+1,-1,-1,1,1};
int ay[8]={-1,1,0,0,-1,1,-1,1};
int kx[8]={2,2,-2,-2,1,1,-1,-1};
int ky[8]={1,-1,1,-1,2,-2,2,-2};
//const ll len=180;
vector<ll>g[N];
bitset<N>bt;
ll dist[N],flag[N],mx=0,mx2=1e9,index=0;
void dfs(ll i,ll prev){
	for(int j:g[i]){
		if(j==prev) continue;
		dist[j]=dist[i]+1;
		if(flag[j]){
			mx=max(mx,dist[j]);
			//dist[j]=0;
		}
		dfs(j,i);
	}
}
void dfs2(ll i,ll prev){
	for(int j:g[i]){
		if(j==prev) continue;
		dist[j]=dist[i]+1;
		//cout<<i<<" "<<j<<endl;
		if(flag[j]){
			//cout<<i<<" "<<j<<" "<<dist[j]<<" "<<mx<<endl;
			if(dist[j]>mx){ index=j;mx=dist[j];}
		}
		dfs2(j,i);
	}
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
	cin>>t;
   	int tt=t;
    while(t--){
		ll n,m,i,j,k,ans=0,start=0;
		cin>>n>>k;
		for(i=1;i<=n;i++){
			g[i].clear();
			flag[i]=0;
		}
		mx=0;
		mx2=1e9;
		for(i=0;i<k;i++){
			ll id;
			cin>>id;
			if(i==0) start=id;
			flag[id]=1;
		}
		for(i=1;i<n;i++){
			ll u,v;
			cin>>u>>v;
			g[u].pb(v);
			g[v].pb(u);
		}
		if(k==1) {cout<<"0\n";continue;}
		dist[start]=0;
		dfs2(start,0);
		mx=0;
		dist[index]=0;
		dfs(index,0);
		//cout<<index<<" "<<mx<<"\n";
		cout<<(mx+1)/2<<"\n";
		
		
	}
	return 0;
	
}