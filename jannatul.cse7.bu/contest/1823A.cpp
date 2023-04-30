#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7+7;
ll b[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll i,n,j,k,s=0,s2=0,z=0;
		cin>>n>>k;
		for(i=1;i<=n;i++){
			ll x=(i*(i-1))/2;
			ll x2=((n-i)*(n-i-1))/2;
			if(x+x2==k) {z=1;s2=i;break;}
		}
		if(z==0) cout<<"NO\n";
		else{
			cout<<"YES\n";
			for(i=0;i<n;i++){
				if(i<s2) cout<<"1 ";
				else cout<<"-1 ";
			}
			cout<<endl;
		}
	}
	return 0;	
}