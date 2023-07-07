#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=4e5+7;
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
    //ll l=t;
    while(t--){
    	//cout<<"Case "<<l-t<<": ";
    	ll n,i,j,s=0,z,ans=0,res=0,k;
    	cin>>n>>k;
    	ll a[n];
    	vector<ll>v;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		if(i>0){
    			v.push_back(abs(a[i]-a[i-1]));
    		}
    	}
    	sort(v.begin(),v.end());
    	for(i=0;i<n-k;i++){
    		ans+=v[i];
    	}
    	cout<<ans<<"\n";
	}
	return 0;
}