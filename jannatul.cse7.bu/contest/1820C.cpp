#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
ll a[N],b[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,i,j,s=0,s2=0,z=0;
		cin>>n;
		map<ll,ll>m;
		for(i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
			if(m[a[i]]>1) z=1;
			s2=max(s2,a[i]);
		}
		for(i=0;i<=n+2;i++){
			if(m[i]==0) {s=i;break;}
		}
		if(m[s+1]==0){
			if(s2>s+1 || z==1) cout<<"YES\n";
			else cout<<"NO\n";
		}
		else{
			j=-1;
			ll k=-1;z=0;
			for(i=n-1;i>=0;i--){
				if(a[i]==s+1) {j=i;break;}
			}
			for(i=0;i<j;i++){
				if(a[i]==s+1) k=1;
				else if(a[i]<s+1 && k==1){
					m[a[i]]--;
					if(m[a[i]]==0) {z=1;break;}
				}
			}
			if(z==1) cout<<"NO\n";
			else cout<<"YES\n";
		}
	}
	return 0;
}