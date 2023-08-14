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
ll arr[N],lev[N],in[N];
vector<ll>g[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    ll len=t;
    while(t--){
    	ll n,i,j,s=0,sum=0,mx=-1e9;
    	cin>>n;
    	for(i=1;i<=n;i++){
    		sum=0;mx=-1e9;
    		for(j=1;j<i;j++){
    			sum+=j*j;
    			mx=max(mx,j*j);
    		}
    		for(j=i;j<=n;j++){
    			sum+=j*(n-j+i);
    			mx=max(mx,j*(n-j+i));
    		}
    		s=max(s,sum-mx);
    	}
		cout<<s<<"\n";
	}
	return 0;
}