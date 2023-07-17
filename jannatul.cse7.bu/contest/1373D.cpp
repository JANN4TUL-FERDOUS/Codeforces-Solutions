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

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);   	 
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,ans=0;
   		cin>>n;
	    ll a[2]={0},b[2],arr[n];	
	    b[0]=0;b[1]=0; 
	    for(i=0;i<n;i++){
	    	cin>>arr[i];
	    	a[i%2]+=arr[i];
	    	ans=max(ans,a[1]-a[0]-b[i%2]);
	    	b[i%2]=min(b[i%2],a[1]-a[0]);
	    	//cout<<i<<" "<<ans<<" "<<b[i%2]<<" "<<a[i%2]<<endl;
	    }
	    cout<<a[0]+ans<<"\n";
    }
    return 0;
}