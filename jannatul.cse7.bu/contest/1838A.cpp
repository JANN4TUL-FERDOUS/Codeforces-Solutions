#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=3e5+3;
ll mod=1e9+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		ll n,i,j,k,s=0,s2=0,z=0;
		cin>>n;
		ll a[n];
		vector<ll>v;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		if(a[0]<0) cout<<a[0]<<"\n";
		else cout<<a[n-1]<<"\n";
	}
	return 0;
}