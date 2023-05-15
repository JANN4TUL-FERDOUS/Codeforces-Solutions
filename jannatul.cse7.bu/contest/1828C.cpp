#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
const ll mod=1e9+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		ll n,i,s=1,s2,z=0;
		cin>>n;
		ll a[n],b[n];
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(i=n-1;i>=0;i--){
			ll x=upper_bound(a,a+n,b[i])-a;
			//cout<<a[x]<<" "<<x<<" "<<b[i]<<endl;
			//cout<<i<<" "<<x<<" "<<b[i]<<" "<<s<<" "<<z<<endl;
			if(x==n || n-x-z<=0) {s=0;break;}
			s*=(n-x-z);
			s%=mod;
			z++;
		}
		cout<<s<<endl;
	}
	return 0;
}