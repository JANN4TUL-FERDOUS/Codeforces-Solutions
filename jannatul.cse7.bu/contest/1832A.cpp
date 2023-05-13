#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,i,j,s=0,s2=0,z=0;
		string a;
		cin>>a;
		map<char,ll>m;
		for(i=0;i<a.length();i++){
			m[a[i]]++;
			if(m[a[i]]==2) s++;
		}
		if(s>=2) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}