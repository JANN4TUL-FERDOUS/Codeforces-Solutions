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
    	ll n,i,j,ans=0,sum=0;
	    cin>>n;
	    string a;
	    cin>>a;
	    map<ll,ll>mp;
	    mp[0]++;
	    for(i=0;i<n;i++){
	    	ll x=a[i]-'1';
	    	//cout<<i<<" "<<x<<" "<<ans<<" "<<mp[sum+x]<<endl;
	    	sum+=x;
	    	ans+=mp[sum];
	    	mp[sum]++;
	    }
	    cout<<ans<<"\n";
    }
    return 0;
}