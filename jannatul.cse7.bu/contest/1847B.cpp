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
    	ll n,i,j,s=0,z,res=0,k;
    	cin>>n;
    	ll ans=0;
    	ll a[n];
    	vector<ll>v;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    	}
    	for(i=0;i<n;i++){
    		res=a[i];
    		while(i+1<n && res) {res&=a[i+1];i++;}
    		if(res==0) ans++;
		}
		
		cout<<max(1ll,ans)<<endl;
    		
	}
	return 0;
}