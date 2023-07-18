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
ll arr[N];
vector<ll>g[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);   	 
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,ans=0,m,k,s=0,s2=0,z=0,emp=0;
   		cin>>n>>m>>k;
	    ll x,y;
	    cin>>x>>y;
	    map<pair<ll,ll>,ll>mp;
	    for(i=0;i<k;i++){
	    	ll a,b;
	    	cin>>a>>b;
	    	if((abs(x-a)+abs(y-b))%2==0) s2++;
	    	if (x==a && y==b) z++;
	    	
	    }
	    if(z==1 || s2>0) cout<<"NO\n";
	    else cout<<"YES\n";
	    
    }
    return 0;
}