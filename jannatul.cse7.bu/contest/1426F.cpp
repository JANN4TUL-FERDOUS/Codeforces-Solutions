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
const ll len=180;
ll a[N];
ll dp[N][3];
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k,x=0,y,i,j=0,s=0,s2=0,z=0,base=1;
		string a;
		z=1;
		cin>>n>>a;
		for(i=1;i<=n;i++){
			dp[i][0]=dp[i-1][0];
			dp[i][1]=dp[i-1][1];
			dp[i][2]=dp[i-1][2];
			if(a[i-1]=='a') dp[i][0]=(dp[i][0]+base)%mod;
			else if(a[i-1]=='b') dp[i][1]=(dp[i][1]+dp[i-1][0])%mod;
			else if(a[i-1]=='c') dp[i][2]=(dp[i][2]+dp[i-1][1])%mod;
			else {
				dp[i][0]=(dp[i][0]*3+base)%mod;
				dp[i][1]=(dp[i][1]*3+dp[i-1][0])%mod;
				dp[i][2]=(dp[i][2]*3+dp[i-1][1])%mod;
				base=(base*3)%mod;
			}
			//cout<<i<<" "<<dp[i][0]<<" "<<dp[i][1]<<" "<<dp[i][2]<<endl;
		}
		cout<<dp[n][2]<<"\n";
	}
	return 0;
}