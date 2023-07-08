#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=4e5+7;
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
    //ll l=t;
    while(t--){
    	ll n,m,h,i,j,s=0,z=0;
    	cin>>n>>m>>h;
    	pair<pair<ll,ll>,ll>p[n];
    	for(i=0;i<n;i++){
    		vector<ll>v;
    		for(j=0;j<m;j++){
    			ll x;
    			cin>>x;
    			v.pb(x);
    		}
    		sort(v.begin(),v.end());
    		ll x=0,res=0,ans=0;
    		for(j=0;j<m;j++){
    			if(res+v[j]>h) break;
    			res+=v[j];
    			//cout<<x<<" "<<x+v[j]<<" "<<ans<<endl;
    			x+=v[j];
    			ans+=x;
    			//cout<<x<<" "<<x+v[j]<<" "<<ans<<endl;
    		}
    		//cout<<i<<" "<<j<<" "<<x<<endl;
    		p[i]={{(-1)*j,ans},i};    		
    	}
    	sort(p,p+n);
    	for(i=0;i<n;i++){
    		if(p[i].second==0) {cout<<i+1<<"\n";break;}
    	}
	}
	return 0;
}