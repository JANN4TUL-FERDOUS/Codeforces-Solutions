#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=1e7+3;
ll mod=1e9+7;
ll dp[1025][1025];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,ans=0;
    	cin>>n;
    	ll a[n];
    	for(i=0;i<n;i++) cin>>a[i];
    	sort(a,a+n);
    	ll l=0,r=1e18;
    	while(l<=r){
    		ll mid=(l+r)/2;
    		i=0;
    		//cout<<mid<<" ";
    		while(a[i+1]-a[0]<=2*mid && i+1<n) i++;
    		j=n-1;
    		while(a[n-1]-a[j-1]<=2*mid && j-1>=0) j--;
    		i++;j--;
    		//cout<<mid<<" "<<i<<" "<<j<<" "<<ans<<endl;
    		if(i>j || a[j]-a[i]<=2*mid) {r=mid-1;ans=mid;}
    		else l=mid+1;
    	}
    	cout<<ans<<"\n";
    }
    
    return 0;
}