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
    ll t=1;
   // cin>>t;
    ll len=t;
    while(t--){
    	ll n,i,j,s=0,sum=0,mx=-1e9;
    	cin>>n;
    	if(n-3>=0) sum=2*4*3*pow(4,n-3);
    	if(n-4>=0) sum+=(n-3)*4*3*3*pow(4,n-4);
    	cout<<sum<<"\n";
	}
	return 0;
}