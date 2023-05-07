#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1007;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	//char a[]="codeforces";
	while(t--){
		ll n,m,i,j,z=0,x=0,y=0;
		cin>>n>>m;
		map<ll,ll>mp,mp2,mm;
		vector<ll>v;
		vector<pair<ll,ll>>v2;
		for(i=0;i<m;i++){
			ll u,u2;
			cin>>u>>u2;
			mp[u]++;mp[u2]++;
			if(mp[u]==1) v.push_back(u);
			if(mp[u2]==1) v.push_back(u2);
		}
		for(i=0;i<(int)v.size();i++){
			mp2[mp[v[i]]]++;
		}
		for(i=0;i<(int)v.size();i++){
			if(mm[mp[v[i]]]==0){
				v2.push_back({mp2[mp[v[i]]],mp[v[i]]});
			}
			mm[mp[v[i]]];
		}
		sort(v2.begin(),v2.end());
		x=v2[0].second;y=v2[1].second;
		cout<<x<<" "<<y-1<<endl;
	}
	return 0;
}