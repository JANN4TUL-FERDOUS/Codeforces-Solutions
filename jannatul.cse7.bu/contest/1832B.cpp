#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,i,j,s=0,s2=0,z=0,m;
		cin>>n>>m;
		ll a[n+1],b[n+1];
		a[0]=0;
		for(i=1;i<=n;i++) {
			cin>>a[i];
		}
		sort(a,a+n+1);
		b[0]=0;
		for(i=1;i<=n;i++){
		    b[i]=a[i]+b[i-1];
			//cout<<b[i]<<" ";
		}
		s=0;
		for(i=0;i<=m;i++){
			//cout<<i*2<<" "<<n-m+i<<" "<<b[n-m+i]<<" "<<b[i*2]<<endl;
			z=b[n-m+i]-b[i*2];
			s=max(s,z);			
		}
		cout<<s<<"\n";
	}
	return 0;
}