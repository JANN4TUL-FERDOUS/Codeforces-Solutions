#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=1e6+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
ll arr[N];
vector<ll>g[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,m,h,i,j,s=0,z=0;
    	cin>>n;
    	for(i=2;;i++){
    		ll x=1+i*i+i;
    		if(x>n) break;
    		ll temp=i*i;
    		while(x<=n){
    			if(x==n) {z=1;break;}   		
    			temp*=i;
    			x+=temp;
    				
    		}
    	}
    	if(z==1) cout<<"YES\n";
    	else cout<<"NO\n";
	}
	return 0;
}