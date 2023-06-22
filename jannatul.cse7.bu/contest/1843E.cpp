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
 
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll i,j,s=0,s2=0,z=0,k,ans=-1;
    	ll n,m;
    	cin>>n>>m;
    	vector<pair<ll,ll>>pr;
    	for(i=0;i<m;i++){
    		ll u,v;
    		cin>>u>>v;
			u--;v--;
			pr.pb({u,v});
    	}
    	ll q;
    	cin>>q;
    	ll arr[q];
    	for(i=0;i<q;i++) cin>>arr[i];
    	ll l=1,r=q;
    	while(l<=r){
    		ll mid=(l+r)/2;
    		//cout<<endl<<" "<<l<<" "<<r<<" "<<mid<<" ";
    		ll c[n]={0};
    		ll use=0;
    		for(i=0;i<mid;i++){
    			c[arr[i]-1]=1;
    		}
    		for(i=1;i<n;i++) {
    			c[i]+=c[i-1];
    			//cout<<c[i]<<"\n";
			}
    		for(i=0;i<m;i++){
    			ll x=c[pr[i].ss];
    			if(pr[i].ff>0) x-=c[pr[i].ff-1];
    			if(2*x>(pr[i].ss-pr[i].ff+1)) {
    				//cout<<x<<" "<<endl;
    				//cout<<i<<" "<<pr[i].ff<<" "<<pr[i].ss<<" "<<mid<<endl;
    				r=mid-1;
    				ans=mid;
    				use=1;
    				break;
    			}
    		}
    		if(use==0) l=mid+1;
    	}
    	cout<<ans<<"\n";
    	
	}
	return 0;
}