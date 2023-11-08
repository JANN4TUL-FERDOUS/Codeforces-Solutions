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

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	int l=t;
  	while(t--){
  		ll n,i,j,k,len;
  		string str;
  		cin>>str>>n;
  		string a[n+1];
  		for(i=1;i<=n;i++) cin>>a[i];
  		len=str.length();
  		pair<ll,ll>pr[len+1];
  		ll dp[len+1];
  		for(i=0;i<=len;i++) dp[i]=1e9;
  		dp[0]=0;
  		for(i=0;i<len;i++){
  			for(j=1;j<=n;j++){
  				if(i+a[j].length()<=len && str.substr(i,a[j].length())==a[j]){
  					for(k=1;k<=a[j].size();k++){
  						if(dp[i+k]>dp[i]+1){
  							dp[i+k]=dp[i]+1;
  							pr[i+k]={j,i};
  						}
  					}
  				}
  			}
  		}
  		if(dp[len]==1e9) {cout<<"-1\n";continue;}
  		vector<pair<ll,ll>>v;
  		while(len>0){
  			v.pb(pr[len]);
  			len=pr[len].ss;
  		}
  		cout<<v.size()<<"\n";
  		for(auto i:v){cout<<i.ff<<" "<<i.ss+1<<endl;}
	}
	return 0;
}