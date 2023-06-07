#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=1e6+7;
ll mod=1e9+7;
ll a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    //memset(dp,0,sizeof(dp));
	ll n,i,j,x=0,s=1;
	vector<ll>v;
	v.pb(1);
	cin>>n;
	if(n<5) {
		cout<<"1\n1\n";
		return 0;
	}
	for(i=2;i<n;i++){
		if(__gcd(i,n)==1){v.pb(i);x=i;s=(s*i)%n;}	
		
	}
	ll l=v.size();
	if(s!=1) l--;
	cout<<l<<"\n";
	for(i=0;i<l;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}