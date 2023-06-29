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
    	ll n,i,j,s=0,k,z,ans=0;
	    cin>>n>>k>>z;
	    ll a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    ll r=min(z,k/2);
	    for(i=0;i<=r;i++){
	    	ll mx=a[0]+a[1];
	    	s=a[0];
	    	for(j=1;j<=k-2*i;j++){
	    		s+=a[j];
	    		mx=max(mx,a[j]+a[j+1]);
	    	}
	    	//cout<<k-2*i<<" "<<ans<<" "<<s<<" "<<mx<<" "<<r<<endl;
	    	s+=(mx*i);
	    	ans=max(ans,s);
    	} 
    	cout<<ans<<"\n";
	    
    }
    
    return 0;
}