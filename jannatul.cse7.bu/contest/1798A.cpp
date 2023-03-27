#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
//ll a[N],b[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll n,i,j,k,s=0,s2=0,z=0;
  		cin>>n;
  		ll a[n],b[n],c[n],d[n];
  		for(i=0;i<n;i++) cin>>a[i];
  		for(i=0;i<n;i++) cin>>b[i];
  		for(i=0;i<n;i++){
  			c[i]=max(a[i],b[i]);
  			d[i]=min(b[i],a[i]);
  		}
  		s=c[n-1];s2=d[n-1];
  		sort(c,c+n);
  		sort(d,d+n);
  		
  		if(s==c[n-1] && s2==d[n-1]) cout<<"YES\n";
  		else cout<<"NO\n";
  		
	}
	return 0;
}