#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+500;
ll a[N],b[N];
bitset<N>bt;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,i,j,s=0,s2=0,z=0;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<=n;i++){
			s=0;
			for(j=0;j<n;j++){
				if(a[j]>i) s++;
			}
			if(i==s){z=1;break;}
		}
		if(z==1) cout<<s<<"\n";
		else cout<<"-1\n";
		
	}
	return 0;
}