#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=1e6+7;
ll mod=1e9+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,i,j,s=0,s2=0,z=0,z2=0;
    cin>>n;
    ll a[n];
    vector<ll>v;
    for(i=0;i<n;i++) {
    	cin>>a[i];
    	ll x=sqrt(a[i]);
    	if(x*x==a[i]) {
    		z++;
    		if(a[i]==0) z2++;
		}
    	v.push_back(min(a[i]-x*x,(x+1)*(x+1)-a[i]));
    }
    if(z>=n/2){
    	 cout<<z-n/2+max(0ll,z2-n/2)<<"\n";
    }
    else{
    	sort(v.begin(),v.end());
    	for(i=0;i<n/2;i++) s+=v[i];
    	cout<<s<<"\n";
    }
    return 0;
}