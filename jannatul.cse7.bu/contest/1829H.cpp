#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
const ll mod=1e9+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,m,i,j,s=0,s2=0,z=1,k;
		cin>>n>>k;
		ll dp[n+1][64]={0};
		ll a[n+1];
		for(i=1;i<=n;i++){
			cin>>a[i];
			for(j=0;j<64;j++){
				dp[i][j]+=dp[i-1][j];
				dp[i][j]%=mod;
				dp[i][a[i]&j]+=dp[i-1][j];
				dp[i][a[i]&j]%=mod;
			}
			dp[i][a[i]]=(dp[i][a[i]]+1)%mod;
		}
		for(i=0;i<64;i++){
			if(__builtin_popcount(i)==k){
				s+=dp[n][i];
				s%=mod;
			}
		}
		cout<<s<<endl;
		
	}
	return 0;	
}