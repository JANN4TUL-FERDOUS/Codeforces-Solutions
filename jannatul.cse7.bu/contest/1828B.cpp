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
		ll n,i,s=0,s2,z=0;
		cin>>n;
		ll a[n],b[n];
		vector<ll>v;
		for(i=0;i<n;i++) {
			cin>>a[i];
			z=abs(i+1-a[i]);
			if(z>0){
				if(s==0) s=z;
				else s=__gcd(s,z);
			}
		}
		cout<<s<<"\n";
	}
	return 0;
}