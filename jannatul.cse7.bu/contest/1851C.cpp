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
    	ll n,m,h,i,j,k,z=0,ans=0,temp=0,res=0;
    	cin>>n>>k;
    	ll a[n],b[n];
    	vector<pair<ll,ll>>v;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    	}
    	for(i=0;i<n;i++){
    		if(z==k) break;
    		if(a[i]==a[0]) z++;
    	}
    	//cout<<z<<" "<<k<<" "<<ans<<;
    	if(z==k) ans=1;
    	if(a[n-1]!=a[0]){
    		z=0;ans=0;
    		for(;i<n;i++){
    			if(a[i]==a[n-1]) z++;
    			if(z==k) break;
    		}
    		//cout<<z<<" ";
    		if(z==k) ans=1;
    	}
    	if(ans==1) cout<<"YES\n";
    	else cout<<"NO\n";
    }
    return 0;
}