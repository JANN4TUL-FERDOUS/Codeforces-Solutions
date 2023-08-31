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
ll num=1e17;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,k,s=0,z=0,z2=0;
    	cin>>n>>k;
    	ll a[n];
    	set<ll>st;
    	vector<ll>v;
    	for(i=0;i<n;i++)st.insert(i);
    	st.insert(n);
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		st.erase(a[i]);
    		v.pb(a[i]);
    	}
    	for(i=0;i<n;i++){
    		ll x=a[i];
    		v[i]=*st.begin();
    		st.erase(v[i]);
    		if(x<=n) st.insert(x);
    	}
    	v.pb(*st.begin());
    	for(i=0;i<n;i++) v.pb(v[i]);
    	ll x=n+1;
    	x=(k-1)%x;
    	for(i=0;i<n;i++){
    		cout<<v[n+1-x+i]<<" ";
    	}
    	cout<<"\n";
    }
     return 0;
}