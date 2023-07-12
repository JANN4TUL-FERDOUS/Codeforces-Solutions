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
ll arr[N];
vector<ll>g[N];
ll ans=0,res;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,k,z=0,ans=-1e12;
    	cin>>n;
    	ll a[n];
    	vector<ll>v,v2;
    	for(i=0;i<n;i++) {
    		cin>>a[i];
    		if(a[i]<0) z++;
    		ans=max(ans,a[i]);
    		if(i%2) v.pb(a[i]);
    		else v2.pb(a[i]);
		}
    	ll s=0,s2=0;
    	for(i=0;i<(int)v.size();i++){
    		if(v[i]>0) s+=v[i];
    	}
    	for(i=0;i<(int)v2.size();i++){
    		if(v2[i]>0) s2+=v2[i];
    	}
    	if(z==n) cout<<ans<<endl;
    	else cout<<max(s,s2)<<"\n";
    }
    return 0;
}