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
    ll n,m,i,j,k,res=0;
    cin>>n;
    ll a[n],b[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++) cin>>b[i];
    for(i=0;i<n;i++) arr[i+1]=arr[i]+a[i]*b[i];
    res=arr[n];
    for(i=0;i<n;i++){
    	ll ans=a[i]*b[i];
    	for(j=i-1,k=i+1;j>=0 && k<n;j--,k++){
    		ans+=a[j]*b[k];
    		ans+=b[j]*a[k];
    		res=max(res,ans+arr[n]-arr[k+1]+arr[j]);
    		//cout<<res<<" "<<ans<<endl;
    	}
    	ans=0;
    	for(j=i,k=i+1;j>=0 && k<n;j--,k++){
    		ans+=a[j]*b[k];
    		ans+=b[j]*a[k];
    		res=max(res,ans+arr[n]-arr[k+1]+arr[j]);
    		//cout<<res<<" "<<ans<<endl;
    	}
    }
    cout<<res<<"\n";
    return 0;
}