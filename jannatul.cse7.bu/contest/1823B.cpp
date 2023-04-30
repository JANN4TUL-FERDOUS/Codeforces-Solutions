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
		ll a[n+2];
		for(i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]%k==i%k) continue;
			s++;
		}
		if(s==0) cout<<"0\n";
		else if(s==2) cout<<"1\n";
		else cout<<"-1\n";
	}
	return 0;	
}