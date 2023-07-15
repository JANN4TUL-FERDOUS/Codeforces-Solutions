#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=2e6+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
ll dp[2007][2007],cost[2007][2007],n,v[2007];
vector<ll>g[N];
string arr[]={"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};

ll solve(ll j,ll m){
	ll i;
	if(m<0) return 0;
	if(j==n){
		if(m==0) return 1;
		else return 0;
	}
	ll res=0;
	if(dp[j][m]!=-1) return dp[j][m];
	for(i=9;i>=0;i--){
		res=solve(j+1,m-cost[j][i]);
		if(res==1) break;
	}
	v[j]=i;
	return dp[j][m]=res;
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll i,j,ans=0,k;
    cin>>n>>k;
    memset(dp,-1,sizeof(dp));
    for(i=0;i<n;i++){
    	string a;
    	cin>>a;
    	for(j=0;j<10;j++){
    		for(ll l=0;l<7;l++){
    			if(a[l]==arr[j][l]) continue;
    			else if(a[l]=='1' && arr[j][l]=='0') cost[i][j]=1e9;
    			else cost[i][j]++;
    		}
    	}
	}
	ans=solve(0,k);
	//cout<<ans<<endl;
	if(ans<=0) cout<<"-1\n";
	else{
		for(i=0;i<n;i++){
			cout<<v[i];
		}
     	
     }
    return 0;
}