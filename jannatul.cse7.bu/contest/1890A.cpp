#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=3e5+7;
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
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k,i,j=0,s=0,s2=0,z=0;
		cin>>n;
		ll a[n];
		map<ll,ll>mp;
		vector<ll>v;
		for(i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
			if(mp[a[i]]==1) v.pb(a[i]);
			
		}
		if(v.size()==1) cout<<"YES\n";
		else {
		    ll x=(n+1)/2;
		    if(v.size()==2 && ((mp[v[0]]==x && mp[v[1]]==n-x) ||
		    	(mp[v[0]]==n-x && mp[v[1]]==x))) cout<<"YES\n";
		    else cout<<"NO\n"; 
		}
	}
	return 0;
}