#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=1e6+7;
ll mod=998244353;
int ax[8]={0,0,-1,+1,-1,-1,1,1};
int ay[8]={-1,1,0,0,-1,1,-1,1};
int kx[8]={2,2,-2,-2,1,1,-1,-1};
int ky[8]={1,-1,1,-1,2,-2,2,-2};
//const ll len=180;
vector<pair<ll,ll>>v;
ll arr[N];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
	cin>>t;
   	int tt=t;
    while(t--){
		ll n,m,i,j,ans=0;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++) cin>>a[i];
		vector<ll>dp(n+1);
		dp[n]=0;
		for(i=n-1;i>=0;i--){
			dp[i]=dp[i+1]+1;
			if(i+a[i]<n){
				dp[i]=min(dp[i],dp[i+a[i]+1]);
			}
		}
		cout<<dp[0]<<"\n";
		
	}
	return 0;
	
}