#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
    cin >> t;
	while (t--) {
    	int n,j,z=0;
    	cin>>n;
    	vector<ll>a(n),b(n);
    	for(ll& i:a) cin>>i;
    	for(ll& i:b) cin>>i;
    	vector<ll>c(n+1),sum(n+1),ans(n+1);
    	ll i;sum[0]=0;
    	for(i=1;i<=n;i++){
    		//cout<<b[i]<<" ";
    		sum[i]=sum[i-1]+b[i-1];
    	}
    	for(i=0;i<n;i++){
    		ll x=lower_bound(sum.begin(),sum.end(),a[i]+sum[i])-sum.begin();
    		//cout<<x-1<<" "<<sum[x-1]<<" "<<a[i]<<"\n";
    		c[i]++;
    		c[x-1]--;
    		ans[x-1]+=sum[i]+a[i]-sum[x-1];
    	}
    	for(i=1;i<n;i++) c[i]+=c[i-1];
    	for(i=0;i<n;i++){
    		//cout<<ans[i]<<" "<<c[i]<<" "<<b[i]<<" ";
    		ans[i]+=c[i]*b[i];
    		cout<<ans[i]<<" ";
    	}
    	cout<<"\n";
   }
   return 0;
}