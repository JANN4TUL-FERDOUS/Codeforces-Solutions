#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
ll a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll i,j=-1,s=0,n,s2=0,k;
		cin>>n;
		ll a[n],b[n];
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		s=a[0]*a[1];
		s2=a[n-1]*a[n-2];
		cout<<max(s,s2)<<"\n";
	}
	return 0;
}