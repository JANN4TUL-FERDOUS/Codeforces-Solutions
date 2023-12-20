#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=5e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
		ll n,i,j;
		cin>>n;		
		ll a[n],b[n],c[n];;
		multiset<pair<ll,ll>>st,st2,st3;
		for(i=0;i<n;i++) {cin>>a[i];st.insert({a[i],i});}
		for(i=0;i<n;i++) {cin>>b[i];st2.insert({b[i],i});}
		for(i=0;i<n;i++) {cin>>c[i];st3.insert({c[i],i});}
		ll ans=0;
		for(i=0;i<n;i++){
			st.erase(st.find({a[i],i}));
			st2.erase(st2.find({b[i],i}));
			st3.erase(st3.find({c[i],i}));
			auto u=*st.rbegin(),v=*st2.rbegin(),w=*st3.rbegin();
			st2.erase(st2.find({b[w.ss],w.ss}));
			st3.erase(st3.find({c[v.ss],v.ss}));
			st.erase(st.find({a[w.ss],w.ss}));
			auto u3=*st.rbegin();
			auto v3=*st2.rbegin(),w3=*st3.rbegin();
			st.insert({a[w.ss],w.ss});
			st.erase(st.find({a[v.ss],v.ss}));
			auto u2=*st.rbegin();
			st.insert({a[v.ss],v.ss});
			st2.insert({b[w.ss],w.ss});
			st3.insert({c[v.ss],v.ss});
			st2.erase(st2.find({b[u.ss],u.ss}));
			st3.erase(st3.find({c[u.ss],u.ss}));
			auto v2=*st2.rbegin(),w2=*st3.rbegin();
			st2.insert({b[u.ss],u.ss});
			st3.insert({c[u.ss],u.ss});
			
			st.insert({a[i],i});
			st2.insert({b[i],i});
			st3.insert({c[i],i});
			ll x=u.ff,y=v.ff,z=w.ff;
			ans=max({ans,a[i]+v3.ff+z,b[i]+x+w2.ff,c[i]+x+v2.ff,a[i]+y+w3.ff,b[i]+u3.ff+z,c[i]+u2.ff+y});
			
		}
		
		cout<<ans<<"\n";
	}
	return 0;
}