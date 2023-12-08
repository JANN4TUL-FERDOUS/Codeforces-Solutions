#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ff first
#define ss second
#define pb push_back
const int N=2e5+7;
ll mod=998244353;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
ll cnt[N],pr[N];
ll dp[2][N],ans[N];
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll i,j,n,k;
   	cin>>n>>k;
   	dp[0][0]=1;
   	for(i=1; ;i++){
   		if(k*i+i*(i-1)/2>n) break;
   		ll p=(k+i-1);
   		for(j=0;j<=n;j++) {
   			dp[i&1][j]=0;
   			if(j>=p){
   				dp[i&1][j]=dp[!(i&1)][j-p];
   				dp[!(i&1)][j]=(dp[!(i&1)][j]+dp[!(i&1)][j-p]);
   				if(dp[!(i&1)][j]>=mod) dp[!(i&1)][j]-=mod;
   			}
   			ans[j]=(ans[j]+dp[i&1][j]);
   			if(ans[j]>=mod) ans[j]-=mod;
		}
		//for(j=1;j<=n;j++) ans[j]=(ans[j]+dp[i&1][j])%mod;	
   	}
   	 
   	for(i=1;i<=n;i++) cout<<ans[i]<<" ";
    return 0;
}