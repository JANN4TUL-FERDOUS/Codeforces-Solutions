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
    	ll n,m,i,j,s=1,z=1e12,k;
    	ll a,b,c;
    	cin>>a>>b>>c;
    	s=(c+1)/2+a;
    	b+=c/2;
    	if(s>b) cout<<"First\n";
    	else cout<<"Second\n";
    }
    return 0;
}