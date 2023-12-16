#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=1e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<":\n";
		ll n,m,i,j,s=0,s2=0,z=0;
		cin>>n;
		ll a[n],dp[n+1]={0};
		for(i=0;i<n;i++) cin>>a[i];
		dp[0]=a[0];dp[1]=a[0]+a[1];
		for(i=2;i<n;i++){
			dp[i]=dp[i-2]+a[i];
			if(i-3>=0) dp[i]=min(dp[i],dp[i-3]+a[i]);
			if(i-4>=0) dp[i]=min(dp[i],dp[i-4]+a[i-1]+a[i]);
			//cout<<i<<" "<<dp[i]<<"\n";
		}
		ll ans=dp[n-1];
		if(n-2>=0) ans=min(ans,dp[n-2]);
		if(n-3>=0) ans=min(ans,dp[n-3]);
		cout<<ans<<"\n";
	}
	return 0;
}