#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1007;
ll a[N][N],vis[N][N],s=0,n,m;
ll d[4]={1,-1,0,0};
ll d2[4]={0,0,1,-1};
void dfs(ll i,ll j){
	vis[i][j]=1;
	s+=a[i][j];
	for(ll k=0;k<4;k++){
		if(i+d[k]>0 && i+d[k]<=n && j+d2[k]>0 && j+d2[k]<=m && a[i+d[k]][j+d2[k]]>0 ){
			if(vis[i+d[k]][j+d2[k]]==0) dfs(i+d[k],j+d2[k]);
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	//char a[]="codeforces";
	while(t--){
		ll i,j,z=0,x,y;
		cin>>n>>m;
		//ll b[n+1][m+1];
		for(i=1;i<=n;i++){
			for(j=1;j<=m;j++) {cin>>a[i][j];vis[i][j]=0;}
			
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=m;j++) {
				s=0;
				if(a[i][j]>0 && vis[i][j]==0) dfs(i,j);
				z=max(z,s);
			}				
		}
		cout<<z<<"\n";
	}
	return 0;
}