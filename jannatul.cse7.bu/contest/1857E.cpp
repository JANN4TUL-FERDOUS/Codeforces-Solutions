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
ll arr[N],lev[N],in[N];
vector<ll>g[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    ll len=t;
    while(t--){
    	ll n,m,i,j,s=0,z=1e12,k;
    	cin>>n;
    	ll a[n],b[n+1],c[n],x=0;
    	map<ll,ll>mp;
    	b[0]=0;
    	vector<pair<ll,ll>>v;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		v.pb({a[i],i});
		}
		sort(v.begin(),v.end());
		for(i=0;i<n;i++) b[i+1]=v[i].ff+b[i];
		for(i=0;i<n;i++){
			ll x=n+(b[n]-b[i])-v[i].ff*(n-i)+v[i].ff*i-b[i];
			c[v[i].ss]=x;
		}
		for(i=0;i<n;i++) cout<<c[i]<<" ";
		cout<<endl;
	}
	return 0;
}