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
		ll n,i,j,s=0;
		map<string,ll>mp;
		cin>>n;
		string a;
		cin>>a;
		for(i=1;i<n;i++){
			string b;
			b+=a[i-1];
			b+=a[i];
			mp[b]++;
			//cout<<b<<endl;
			if(mp[b]==1) s++;
		}
		cout<<s<<endl;
	}
	return 0;
}