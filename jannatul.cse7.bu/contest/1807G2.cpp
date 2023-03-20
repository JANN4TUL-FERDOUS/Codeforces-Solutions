#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
ll a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll n,i,j,c,s=1,s2=0,x=0,z=0;
  		cin>>n;
  		int a[n];
  		for(i=0;i<n;i++) cin>>a[i];
  		sort(a,a+n);
  		for(i=1;i<n;i++){
  			if(a[i]>s) {x=1;break;}
  			s+=a[i];
  		}
  		if(x==1 || (n==1 && a[0]!=1)) cout<<"NO\n";
  		else cout<<"YES\n";
	}
	return 0;
}