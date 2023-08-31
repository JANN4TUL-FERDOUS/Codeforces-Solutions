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
    	cin>>n;
    	ll a[n];
    	map<ll,ll>mp;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		mp[a[i]]=i;
    	}
    	z=mp[1];
    	for(i=2;i<=n;i++){
    		//cout<<s<<" "<<z<<" "<<mp[i]<<"\n";
    		if(mp[i]<z) s++;
    		z=mp[i];
    	}
    	cout<<s<<"\n";
    }
     return 0;
}