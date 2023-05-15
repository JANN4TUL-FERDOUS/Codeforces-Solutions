#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		ll n,i,s=0,s2,z;
		cin>>n;
		if(n%2){
			for(i=1;i<=n;i++) cout<<i<<" ";
		}
		else{
			for(i=1;i<=n;i++) cout<<i*2<<" ";
		}
		cout<<endl;
	}
	return 0;
}