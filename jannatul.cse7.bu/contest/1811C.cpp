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
  		ll i,j,s=1e9,s2=0,z=0,n,d;
  		cin>>n;
  		ll b[n];
  		for(i=0;i<n-1;i++) cin>>b[i];
  		cout<<b[0]<<" ";
  		for(i=1;i<n-1;i++) cout<<min(b[i],b[i-1])<<" ";	
		cout<<b[n-2]<<endl;		
  	}
  	return 0;
}