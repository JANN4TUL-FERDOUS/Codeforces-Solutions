#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=2e5+7;
ll mod=998244353;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
ll num=1e17;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;
    while(t--){
    	ll n,i,j,k,s=0,z=0,z2=0;
    	cin>>n;
    	ll a[n],b[n];
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		a[i]=(i+1)*a[i]*(n-i);
    	}
    	for(i=0;i<n;i++) cin>>b[i];
    	sort(b,b+n);
    	sort(a,a+n,greater<>());
    	for(i=0;i<n;i++){
    		a[i]=a[i]%mod;
    		s=(s+(a[i]*b[i])%mod)%mod;
    	}
    	cout<<s<<"\n";
    }
    return 0;
}