#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=2e5+7;
ll mod=1e9+7;
ll ax[]={0,0,-1,+1};
ll ay[]={-1,1,0,0};
bitset<N>bt;
vector<ll>g[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);   	 
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,ans=0,k;
	    cin>>n;
	    string a;
	    cin>>a;
	    ll s=1;
	    vector<ll>v;
	    for(i=1;i<n;i++){
	    	if(a[i]==a[i-1]) s++;
	    	else {
	    		v.pb(s);
	    		s=1;
	    	}	    	
	    }
	    v.pb(s);
	    if(v.size()==1) cout<<(v[0]+2)/3<<"\n";
	    else{
	    	ll l=v.size();
	    	if(a[0]==a[n-1]){
	    		v[0]+=v[l-1];
	    		l--;
	    	}
	    	for(i=0;i<l;i++){
	    		ans+=v[i]/3;
	    	}
	    	cout<<ans<<"\n";
	    }
    }
    return 0;
}