#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+7;
ll a[N],n,m,ans=0;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	ll t;
	cin>>t;
	ll tt=t;
	while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll i,j=-1,s=1,s2=0,k;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n;i++){
			s=1;
			for(j=0;j<n;j++){
				if(i==j) s*=a[j]+1;
				else s*=a[j];
			}
			s2=max(s,s2);
		}
		cout<<s2<<"\n";
	}
	return 0;
}