#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll n,i,j,mid,l,r=1e9,s=0;
  		cin>>n;
  		s=sqrt(n);
  		if(s*s==n) cout<<s-1<<"\n";
  		else cout<<s<<"\n";
	}
	return 0;
}