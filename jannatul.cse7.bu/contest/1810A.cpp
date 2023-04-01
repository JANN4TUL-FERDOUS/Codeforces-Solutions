#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
ll b[N],a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll n,i,j,k,s=0,s2=0,s3=0,z=0;
  		cin>>n;
  		vector<ll>v;
  		ll a[n];
  		for(i=0;i<n;i++){
  			cin>>a[i];
  			if(a[i]<=i+1) s=1;
		}
		if(s==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}