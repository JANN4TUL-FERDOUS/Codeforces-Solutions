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
ll a[N],b[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,m,i,j,s=0,z=1e15,z2=-1e15;
		cin>>n;
		ll a[n];
		map<ll,ll>mp;
	    for(i=0;i<n;i++) {cin>>a[i];mp[a[i]]++;}
	    ll q;
	    cin>>q;
	    while(q--){
	    	ll x,y;
		    cin>>x>>y;
		    ll d=x*x-4*y;
		    if(d<0) {cout<<"0 ";continue;}
		    ll d2=sqrt(d);
		    if(d!=d2*d2) cout<<"0 ";	    
		    else{
		    	ll x1=(x-d2)/2;
		    	ll x2=(x+d2)/2;
		    	if(x1==x2) cout<<(mp[x1]*(mp[x1]-1))/2<<" ";
		    	else cout<<mp[x1]*mp[x2]<<" ";
		    }
	    }
	    cout<<endl;
	}
    return 0;
}