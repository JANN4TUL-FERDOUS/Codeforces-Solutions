#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	//char a[]="codeforces";
	while(t--){
		ll n,i,j,s=1e9,s2=1e9,z=1e9,z2=1e9;
		cin>>n;
		for(i=0;i<n;i++){
			ll x;
			string a;
			cin>>x>>a;
			if(a[0]=='1' && a[1]=='1') s=min(s,x);
			if(a[0]=='1') z=min(z,x);
			if(a[1]=='1') z2=min(z2,x);
		}
		if(z==1e9 || z2==1e9) cout<<"-1\n";
		else cout<<min(s,z+z2)<<"\n";
	}
	return 0;
}