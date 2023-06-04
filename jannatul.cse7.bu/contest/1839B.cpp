#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=3e5+3;
ll mod=1e9+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		ll n,i,j,k,s=0,s2=0,z=0;
		cin>>n;
		map<ll,ll>mp,mp2,mp3;
		set<ll>st;
		vector<pair<ll,ll>>v;
		ll a[n],b[n];
		
		for(i=1;i<=n;i++){
			cin>>a[i]>>b[i];
			b[i]*=(-1);
			v.push_back({a[i],b[i]});
		}
		sort(v.begin(),v.end());
		j=0;
		for(i=0;i<n;){
			ll x=0;
			//cout<<j<<" "<<v[i].ff<<" "<<v[i].ss<<endl;
			//cout<<j<<"  "<<mp[j]<<endl;
			z=j;
			j-=mp[j];
			mp[z]=0;
			if(v[i].ff>=j) {
				s+=(-1)*v[i].ss;
				mp[v[i].ff]++;
				j++;
				i++;
			}
			while(v[i].ff<=j && i<n){i++;}
			//cout<<i<<" "<<j<<endl;
			
		}
		cout<<s<<"\n";
	}
	return 0;
}