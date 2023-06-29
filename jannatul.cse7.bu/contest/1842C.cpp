#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=1e7+3;
ll mod=1e9+7;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,s=0;
	    cin>>n;
	    ll a[n],dp[n+2];
	    for(i=0;i<n;i++){
	    	cin>>a[i];
	    	dp[i]=1e9;
	    }
	    dp[n]=1e9;
	    for(i=0;i<n;i++){
	    	ll x=min(s+1,dp[a[i]]);
	    	dp[a[i]]=min(dp[a[i]],s);
	    	s=x;
	    }
	    //cout<<s<<"\n";
	    cout<<n-s<<"\n";
    }
    
    return 0;
}