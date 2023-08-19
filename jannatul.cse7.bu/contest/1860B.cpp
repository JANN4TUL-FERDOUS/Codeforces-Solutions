#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=2e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
vector<ll>g[N];
ll a[N],b[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,m,i,j,s=0,ans=1e12;
		ll a,b,k;
		cin>>n>>k>>a>>b;
		if(b*k<=n) n-=b*k;
		else n%=k;
		if(n-a<=0) {cout<<"0\n";continue;}
		//ll l=1,r=n;
		//while(l<r){
			//ll mid=(l+r)/2;
		 	ll x=(n/k)-a/k+max(0ll,n%k-a%k);
		 	ll y=a;
		 	if(y>=n%k) {y-=n%k;n-=n%k;}
		 	else {n-=y;y=0;}
		 	x=min(x,n/k-y/k+max(0ll,n%k-y%k));
			cout<<x<<endl;
	}
    return 0;
}