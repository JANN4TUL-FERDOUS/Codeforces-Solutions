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
ll arr[N],sum,n,res[N];
pair<ll,ll>g[N];
ll dp[N][6];
 
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,i,j;
    cin>>n>>m;
    string a;
    cin>>a;
    string str[6]={"abc","acb","bac","bca","cab","cba"};
    for(i=1;i<=n;i++){
    	ll ind=(i-1)%3;
    	for(j=0;j<6;j++){
    		//cout<<j<<" "<<dp[i][j]<<" ";
    		dp[i][j]=dp[i-1][j]+(a[i-1]!=str[j][ind]);
    		//cout<<dp[i][j]<<" "<<dp[i-1][j]<<" "<<a[i-1]<<" "<<str[j][ind]<<endl;
    	}
    }
    while(m--){
    	ll l,r;
    	cin>>l>>r;
    	ll ans=1e9;
    	for(i=0;i<6;i++){
    		//cout<<i<<" "<<dp[r][i]<<" "<<dp[l-1][i]<<endl;
    		ans=min(ans,dp[r][i]-dp[l-1][i]);
    	}
    	cout<<ans<<"\n";
    }
    return 0;
}