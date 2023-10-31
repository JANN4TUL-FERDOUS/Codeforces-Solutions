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
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

vector<ll>start[N],dead[N];
ll cnt[N];
map<ll,ll>mp[N];
ll a[N];
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k,i,j=0,mx=0,z=0;
		cin>>n>>m>>k;
		ll ans=0;
		for(i=0;i<m;i++){
			ll l,r;
			cin>>l>>r;
			start[l].pb(i);
			dead[r].pb(i);			
		}
		set<ll>st;
		for(i=1;i<=n;i++){
			for(auto j:start[i]){st.insert(j);}
			if(st.size()==0) z++;
			if(st.size()==1) cnt[*st.begin()]++;
			else if(st.size()==2) mp[*st.begin()][*st.rbegin()]++;
			for(auto j:dead[i]) {st.erase(j);}
		}
		for(i=0;i<m;i++){
			ans=max(ans,mx+cnt[i]);
			for(auto j:mp[i]){
				ans=max(ans,cnt[i]+cnt[j.first]+j.second);
			}
			mx=max(mx,cnt[i]);
			//cout<<i<<" "<<cnt[i]<<" "<<ans<<" "<<mx<<endl;
		}
		cout<<ans+z<<"\n";
		for(i=1;i<=n;i++){start[i].clear();dead[i].clear();}
		for(i=0;i<m;i++) {mp[i].clear();cnt[i]=0;}
	}
	return 0;
}