#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7+7;
ll a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,m,i,j,s=0,s2=0,z=1;
		cin>>n>>m;
		ll a[n*m];
		for(i=0;i<n*m;i++) cin>>a[i];
		z=n*m;
		sort(a,a+z);
		//cout<<a[z-1]<<" "<
		s=(abs(a[z-1]-a[0]))*(z-min(n,m));
		//cout<<s<<" "<<z-min(n,m)<<endl;
		//cout<<s<<" "<<a[z-1]-a[1]<<" "<<a[z-2]-a[0]<<endl;
		s+=(min(n,m)-1)*max(abs(a[z-1]-a[1]),abs(a[0]-a[z-2]));
		cout<<s<<endl;
		
	}
	return 0;	
}