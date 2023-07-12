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
ll arr[N];
vector<ll>g[N];
ll ans=0,res;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,k,z=0,ans=-1e12;
    	cin>>n;
    	for(i=2;;i++){
    		if(n%i) break;
    	}
    	for(j=0;j<n;j++){
    		char c='a'+(j%i);
    		cout<<c;
    	}
    	cout<<"\n";
    }
    return 0;
}