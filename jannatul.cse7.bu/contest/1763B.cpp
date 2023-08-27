#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=1e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
vector<ll>g[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
    	ll n,m,i,z=0;
		cin>>n>>m;
		ll mn[n],a[n],b[n];
		vector<pair<ll,ll>>v;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++) {cin>>b[i];v.pb({a[i],b[i]});}
		sort(v.begin(),v.end());
		ll x=1e17;
		for(i=n-1;i>=0;i--){
			//cout<<v[i].ff<<" ";
			x=min(x,v[i].ss);
			mn[i]=x;
		}
		x=0;
		ll m2=m;
		while(m2>=0){
			pair<ll,ll>p={m,100000000};
			ll x=upper_bound(v.begin(),v.end(),p)-v.begin();
			//cout<<m<<" "<<x<<" "<<v[x].ff<<" "<<mn[x]<<" ";
			if(x==n) {z=1;break;}
			m2-=mn[x];
			//cout<<m<<" "<<x<<" "<<mn[x]<<" "<<m+m2<<" "<<v[x].ff<<endl;
			//if(m+m2<v[x].ff) {z=1;break;}
			m+=m2;
		}
		if(z==0) cout<<"NO\n";
		else cout<<"YES\n";
    }
    return 0;
}