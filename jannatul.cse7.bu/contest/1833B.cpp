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
		ll n,i,j,s=0,k;
		map<string,ll>mp;
		cin>>n>>k;
		ll a[n],b[n],c[n];
		vector<pair<ll,ll>>v,v2;
		for(i=0;i<n;i++){
			cin>>a[i];
			v.push_back({a[i],i});
		}	
		for(i=0;i<n;i++){
			cin>>b[i];
			v2.push_back({b[i],i});
		}
		sort(v.begin(),v.end());
		sort(b,b+n);
		for(i=0;i<n;i++){
			c[v[i].ss]=b[i];
		}
		for(i=0;i<n;i++){
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}