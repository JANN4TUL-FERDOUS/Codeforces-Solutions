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
 
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,i,j,l=1,r=1e16,z=0;
    cin>>n;
    while(l<=r){
    	ll mid=(l+r)/2;
    	if((mid-1)/2+(mid-4)/4>=n){
    		z=mid;
    		r=mid-1;
    	}
    	else l=mid+1;
    }
    cout<<z<<"\n";
    return 0;
}