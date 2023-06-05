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
		ll a[n];
		vector<ll>v;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		if(a[n-1]==1) {cout<<"NO\n";continue;}
		cout<<"YES\n";
		j=0;
		for(i=n-1;i>=0;i--){
			if(a[i]==1 && (i==0 || (i>0 && a[i-1]==0))){
				v.push_back(z-j);
				j=z;				
			}
			else v.push_back(0);
			if(a[i]==0 && i>0 && a[i-1]==1) j=z;
			z++;
		}
		for(i=0;i<n;i++) cout<<v[i]<<" ";
		cout<<"\n";
	}
	return 0;
}