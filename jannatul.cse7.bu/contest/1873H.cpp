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
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
const ll len=180;
vector<ll>v[N];
ll a[N],det=0,x,y,dis[N],dis2[N],ar[N];
ll bt[N];

void dfs(ll i,ll prev,ll z){
	bt[i]=1;ar[i]=z;
	if(det==1) return;
	for(auto j:v[i]){
		if(j==prev) continue;
		if(bt[j]==1 &&  (j==y || dis2[j]<dis[j])) {
			//cout<<i<<" "<<j<<" "<<dis2[j]<<" "<<dis[j]<<" "<<z<<endl;
			det=1;return;
		}
		if(bt[j]>0) continue;
		if(j==x) z=1;
		dfs(j,i,z);
	}
	bt[i]=2;
	//cout<<bt[i]<<endl;
}
void bfs(ll i,ll z){
	queue<ll>q;
	q.push(i);
	bt[i]=1;
	while(!q.empty()){
		ll k=q.front();
		q.pop();
		for(ll j:v[k]){
			if(bt[j]) continue;
			if(z==0) dis[j]=dis[k]+1;
			else dis2[j]=dis2[k]+1;
			bt[j]=1;
			q.push(j);
		}
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
		ll n,m,i,j,s=1e9,s2=0,z=0;
		cin>>n>>x>>y;
		det=0;
		for(i=1;i<=n;i++){
			bt[i]=0;
			v[i].clear();
			ar[i]=0;
		}
		for(i=0;i<n;i++){
			ll u1,u2;
			cin>>u1>>u2;
			v[u1].pb(u2);
			v[u2].pb(u1);
		}
		if(x==y) {cout<<"NO\n";continue;}
		dis[x]=0;dis2[y]=0;
		bfs(x,0);
		for(i=1;i<=n;i++)bt[i]=0;
		bfs(y,1);
		
		for(i=1;i<=n;i++)bt[i]=0;
		dfs(y,0,0);
		if(det) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}