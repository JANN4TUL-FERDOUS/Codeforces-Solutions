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
ll arr[N],ans[N],cost[N];
vector<ll>g[N];
vector<ll>prim;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    t=1;
    while(t--){
    	ll n,i,j,s=0,z=0,a,b,k;
    	cin>>n;
    	if(n%2){
    		ll x=(n*n+1)/2;
    		if(x>1) cout<<x-1<<" "<<x<<"\n";
    		else cout<<"-1\n";
    	}
    	else{

			ll x=(n*n)/4+1;
			if(x>2) cout<<x-2<<" "<<x<<"\n";
			else cout<<"-1\n";
    	}
    	
    }
    return 0;
}