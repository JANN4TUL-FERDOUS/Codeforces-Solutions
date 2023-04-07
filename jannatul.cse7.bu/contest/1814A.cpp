#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
//ll b[N],a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll i,j,s=1e9,s2=0,z=0,n,k;
  		cin>>n>>k;
  		if(n>=k){
  			if(n%2==1 && k%2==0) cout<<"NO\n";
  			else cout<<"YES\n";
  		}
  		else cout<<"NO\n";
	}
	return 0;
}