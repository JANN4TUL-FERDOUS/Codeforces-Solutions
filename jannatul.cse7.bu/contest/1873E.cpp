#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
const int N=2e5+7;
ll a[N],n,m,ans=0;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	ll t;
	cin>>t;
	ll tt=t;
	while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll i,j=1,s=0;
		ll k;
		cin>>n>>k;
		for(i=0;i<n;i++) cin>>a[i];
		ll l=1,r=1e18;
		while(l<=r){
			ll mid=(l+r)/2;
			ll x=0;
			for(i=0;i<n;i++){
				if(a[i]<mid) x+=mid-a[i];
			}
			if(x<=k){
				s=mid;
				l=mid+1;
			}
			else r=mid-1;
		}
		cout<<s<<endl;
	}
	return 0;
}