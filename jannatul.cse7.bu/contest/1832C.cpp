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
		cin>>n;
		vector<ll>v;
		map<ll,ll>mp;
		ll a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
			if(i==0 || a[i]!=a[i-1]) v.push_back(a[i]);			
		}
		ll l=v.size();
		for(i=0;i<l;i++){
			if(i==0 || i==l-1) s++;
			else if((v[i]>v[i-1] && v[i]>v[i+1]) ||(v[i]<v[i-1] && v[i]<v[i+1])) s++;
		}
		cout<<s<<"\n";
	}
	return 0;
}