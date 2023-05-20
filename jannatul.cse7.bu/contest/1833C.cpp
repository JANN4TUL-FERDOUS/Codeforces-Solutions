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
		ll n,i,j,s=0,k,s2=0;
		map<string,ll>mp;
		cin>>n;
		ll a[n],b[n],c[n];
		vector<ll>v,v2;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2) v.push_back(a[i]);
			else v2.push_back(a[i]);
		}
		
		if(v.size()==0 || v2.size()==0) {cout<<"YES\n";continue;}
		else{
			sort(v.begin(),v.end());
			sort(v2.begin(),v2.end());
			ll z=0,z2=0;
			for(i=0;i<n;i++){
				if(a[i]%2){
					z++;
					ll x=lower_bound(v.begin(),v.end(),a[i])-v.begin();
					x--;
					//cout<<x<<" "<<z<<" "<<z2<<endl;
					if(x>=0) z2++;
					
				}
				else{
					z2++;
					ll x=lower_bound(v.begin(),v.end(),a[i])-v.begin();
					x--;
					//cout<<x<<" "<<z<<" "<<z2<<endl;
					if(x>=0) z++;
				}
			}
			if(z==n || z2==n) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}