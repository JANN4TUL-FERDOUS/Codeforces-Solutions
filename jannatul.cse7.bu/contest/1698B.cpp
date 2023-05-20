#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
const int N=3e5+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,k,i,j,s=0,s2=0,z=0;
		cin>>n>>k;
		ll a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		s2=0,s=0;
		for(i=1;i<n-1;i++){
			if(a[i-1]+a[i+1]<a[i]) z++;
		}
		if(k==1) cout<<(n-1)/2<<"\n";
		else cout<<z<<"\n";
	}
	return 0;
}