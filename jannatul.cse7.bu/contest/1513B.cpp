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
    arr[0]=1;
    arr[1]=1;
    for(ll i=2;i<=2e5+3;i++) arr[i]=(i*arr[i-1])%mod;    	
    while(t--){
    	ll n,m,d,i,j,s=1,z=1e12,k;
    	cin>>n;
    	ll a[n];
    	map<ll,ll>mp;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		if(i==0) k=a[i];
    		else k&=a[i];
    		mp[a[i]]++;
    		z=min(z,a[i]);
    	}
    	if(k!=z) {cout<<"0\n";continue;}
    	z=mp[z];
    	ll ans=((z*(z-1))%mod);
    	ans=(ans*arr[n-2])%mod;
    	cout<<ans<<"\n";
    	

    }
    return 0;
}