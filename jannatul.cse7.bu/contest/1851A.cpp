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
    	cin>>n>>m>>k>>h;
    	ll a[n],b[m];
    	vector<ll>v;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		if(a[i]!=h)v.push_back(abs(a[i]-h));
    	}
    	for(i=0;i<v.size();i++){
    		if(v[i]%k==0 && v[i]/k<m) ans++;
    	}
    	cout<<ans<<endl;
    }
    return 0;
}