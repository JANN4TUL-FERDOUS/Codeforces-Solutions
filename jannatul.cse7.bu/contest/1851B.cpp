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
    	cin>>n;
    	ll a[n],b[n];
    	vector<pair<ll,ll>>v;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		v.push_back({a[i],i});
    		//cout<<v[i].ff<<" "<<v[i].ss<<endl;
    	}
    	sort(v.begin(),v.end());
    	for(i=0;i<n;i++){
    		//cout<<v[i].ff<<" "<<a[i]<<endl;
    		if(v[i].ff==a[i]) continue;
    		if((v[i].ff%2)!=a[i]%2){z=1;break;}
    	}
    	if(z==0) cout<<"YES\n";
    	else cout<<"NO\n";
    }
    return 0;
}