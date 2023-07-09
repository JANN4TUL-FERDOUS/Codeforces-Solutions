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
    set<ll>st;
    for(ll i=2;i<N;i++){
		ll x=i+1;
		ll j=i*i;
		while(1){
			x+=j;
			st.insert(x);
			if(1e18/j<i) break;
			j*=i;
			//cout<<i<<" "<<j<<" "<<x<<endl;;
			//cout<<x<<"\n";
		}	
		//cout<<i<<" "<<endl;	
	}
    while(t--){
    	ll n,d,h,i,j,s=0;
    	cin>>n;
    	ll z=sqrt(n);
    	if(st.find(n)!=st.end() || (1+z+z*z==n && z>1)) cout<<"YES\n";
    	else cout<<"NO\n";
	}
	return 0;
}