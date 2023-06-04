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
		cin>>n>>k;
		for(i=1;i<=n;i+=k){
			s++;
			if(i==n) z=1;
		}
		if(z==0) s++;
		cout<<s<<"\n";
		
		
	}
	return 0;
}