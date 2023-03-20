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
  		ll n,i,j,s=0,s0=0,s1=0,q,s2=0,x=0,z=0;
  		cin>>n>>q;
  		for(i=0;i<n;i++){
  			cin>>a[i];
  			if(i) a[i]+=a[i-1];
  		}
  		while(q--){
  			ll x,y,k;
  			cin>>x>>y>>k;
  			x--;y--;
  			if(x==0) s2=a[n-1]-a[y];
  			else s2=a[n-1]-a[y]+a[x-1];
  			s2+=(y-x+1)*k;
  			if(s2%2) cout<<"YES\n";
  			else cout<<"NO\n";
  		}
	}
	return 0;
}