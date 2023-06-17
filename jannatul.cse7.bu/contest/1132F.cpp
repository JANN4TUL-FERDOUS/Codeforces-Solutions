#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=607;
ll mod=1e9+7;
bitset<N>bt;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
string a;
ll dp[N][N];

ll fn(ll i,ll n){
	if(i==n) return 1;
	if(i>n) return 0;
	if(dp[i][n]!=-1) return dp[i][n];
	dp[i][n]=1+fn(i+1,n);
	//cout<<i<<" "<<n<<" "<<dp[i][n]<<endl;
	for(ll k=i+1;k<=n;k++){
		if(a[i]==a[k]) dp[i][n]=min(dp[i][n],fn(i+1,k-1)+fn(k,n));
	}
	
	return dp[i][n];
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    memset(dp,-1,sizeof(dp));
    ll n,i,j,s=0,s2=0,z=0;
    cin>>n;
    cin>>a;
    cout<<fn(0,n-1)<<"\n";
    return 0;
}