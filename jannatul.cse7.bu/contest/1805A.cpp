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
  		cin>>n;
  		ll a[n];
  		for(i=0;i<n;i++){
  			cin>>a[i];
  			if(i==0) s=a[i];
  			else s^=a[i];
  		}
  		for(i=0;i<n;i++){
  			a[i]^=s;
  			if(i==0) s2=a[i];
  			else s2^=a[i];
  		}
  		if(s2==0) cout<<s<<"\n";
  		else cout<<"-1\n";
  	}
  	return 0;
}