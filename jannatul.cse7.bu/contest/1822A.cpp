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
		cin>>n>>k;
		ll a[n],b[n];
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n;i++) cin>>b[i];
		for(i=0;i<n;i++){
			if(i+a[i]<=k){
				ll x=i+a[i];
				if(b[i]>s) {j=i+1;s=b[i];}
			}
		}
		cout<<j<<"\n";
	}
	return 0;
}