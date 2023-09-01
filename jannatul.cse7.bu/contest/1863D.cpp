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
ll num=1e17;
ll b[N+1];
char a[505][505];
int vis[505][505],n,m;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
    	ll i,j,k,s=0,z=0,z2=0;
    	cin>>n>>m;
    	string str[n];
    	ll det=0;
    	memset(vis,0,sizeof(vis));
    	for(i=0;i<n;i++)cin>>str[i];
    	for(i=0;i<n;i++){
			if(det==1) break;
			for(j=0;j<m;j++){
				if(str[i][j]=='.' || str[i][j]=='B' || str[i][j]=='W') continue;
				else if(str[i][j]=='L'){
					z=0;
					for(k=i+1;k<n;k++){
						if(str[k][j]=='L'){
							str[i][j]='B';str[i][j+1]='W';
							str[k][j]='W';str[k][j+1]='B';
							z=1;
							vis[k][j]=1;
							//cout<<"YES"<<i<<" "<<k<<" "<<j<<" "<<str[k][j]<<endl;
							break;
						}
					}
					if(z==0) det=1;
				}
				else if(str[i][j]=='U'){
					z=0;
					for(k=j+1;k<m;k++){
						if(str[i][k]=='U' && vis[i][k]==0){
							str[i][j]='B';str[i+1][j]='W';
							str[i][k]='W';str[i+1][k]='B';
							z=1;
							vis[i][k]=1;
							//cout<<"YES "<<i<<" "<<k<<" "<<j<<endl;
							break;
						}
					}
					if(z==0) det=1;
				}
			}
		}	
		if(det==1) cout<<"-1\n";
		else{
			//cout<<n<<" "<<m<<endl;
			for(i=0;i<n;i++){
				for(j=0;j<m;j++) cout<<str[i][j];
				cout<<"\n";
			}
		}
	}
	return 0;
}