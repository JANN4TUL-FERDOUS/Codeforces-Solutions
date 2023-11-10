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
  	int t=1;
  	cin>>t;
  	int l=t;
  	while(t--){
  		ll n,i,j,k=0,len,s=0,m;
  		ll x;
  		cin>>n>>x;
  		ll a[n],ans[n+1];
  		for(i=0;i<n;i++) {cin>>a[i];ans[i]=-1e9;}
  		ans[n]=-1e9;
  		for(i=0;i<n;i++){
  			s=0;
  			for(j=i;j<n;j++){
  				s+=a[j];
  				ans[j-i+1]=max(ans[j-i+1],s);
  			}
  		}
  		for(i=0;i<=n;i++){
  			ll res=0;
  			for(j=0;j<=n;j++){
  				res=max(res,ans[j]+min(j,i)*x);
  			}
  			cout<<res<<" ";
  		}
  		cout<<"\n";
	}
	return 0;
}