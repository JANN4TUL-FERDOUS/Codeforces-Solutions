#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=1e6+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
ll arr[N];
vector<ll>g[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,ans=1,z=0;
    	cin>>n;
    	ll a[n];
    	vector<pair<ll,ll>>v;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    	}
    	for(i=1;i<n;i++){
    		ll x=abs(a[i]-a[i-1]);
    		for(j=0;j<v.size();j++){
    			v[j].ff=__gcd(x,v[j].ff);
    			//cout<<v[j].ff<<" ";
    			v[j].ss++;
    		}
    		v.pb({x,2});
    		vector<pair<ll,ll>>temp;
    		for(j=0;j<v.size();j++){
    			if(v[j].ff==1) continue;
    			ans=max(ans,v[j].ss);
    			if(j==0 || (v[j].ff!=v[j-1].ff))temp.pb(v[j]);
    		}
    		//cout<<i<<" "<<ans<<" "<<v.size()<<endl;
    		v=temp;
    	}
    	cout<<ans<<"\n";
	}
	return 0;
}