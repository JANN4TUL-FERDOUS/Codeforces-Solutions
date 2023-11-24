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
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,j,ans=0,s=0;
		cin>>n;
		ll a[n];
		ll ford[n+1][n+1],back[n+1][n+1];
		memset(ford,0,sizeof(ford));
		memset(back,0,sizeof(back));
		map<ll,ll>mp,mp2;
		for(i=0;i<n;i++){
			cin>>a[i];
			ford[i][a[i]]++;
		}
		for(i=n-1;i>=0;i--)back[i][a[i]]++;
		for(i=1;i<=n;i++){
			for(j=0;j<=n;j++)ford[i][j]+=ford[i-1][j];
		}
		for(i=n-2;i>=0;i--){
			for(j=0;j<=n;j++)back[i][j]+=back[i+1][j];
		}
		for(i=1;i<n-2;i++){
			for(j=i+1;j<n-1;j++){
				ans+=ford[i-1][a[j]]*back[j+1][a[i]];
				//cout<<ans<<" "<<ford[i-1][a[j]]<<" "<<back[j+1][a[i]]<<endl;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}