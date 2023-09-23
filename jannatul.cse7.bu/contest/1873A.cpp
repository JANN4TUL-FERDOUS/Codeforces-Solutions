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
		ll i,j=-1,s=0,s2=0,k;
		//cin>>n;
		string a;
		cin>>a;
		if(a[0]=='a') s++;
		if(a[1]=='b') s++;
		if(a[2]=='c') s++;
		if(s==3 || s==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}