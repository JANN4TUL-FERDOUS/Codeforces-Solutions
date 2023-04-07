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
  		ll i,j,s=0,s2=0,z=0,n;
  		ll a,b,c,d;
  		cin>>n>>a>>b>>c>>d;
  		a=min(a,n-a+1);
  		b=min(b,n-b+1);
  		c=min(c,n-c+1);
  		d=min(d,n-d+1);
  		cout<<abs(min(a,b)-min(c,d))<<"\n";		
  	}
  	return 0;
}