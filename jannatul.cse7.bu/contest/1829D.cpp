#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
ll n,m,s=0;
void fn(ll x){
	//cout<<x<<" "<<m<<endl;
	if(s==1) return;
	if(x==m) {
		s=1;
		return;
	}
	if(x%3>0) return;
	ll s2=x/3;
	fn(2*s2);
	fn(s2);
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	//char a[]="codeforces";
	while(t--){
		ll i,j,z=0,x,y;
		cin>>n>>m;
		x=n;y=0;
		if(n==m) cout<<"YES\n";
		else{
			s=0;
			fn(n);
			//cout<<s<<" ";
			if(s==1) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}