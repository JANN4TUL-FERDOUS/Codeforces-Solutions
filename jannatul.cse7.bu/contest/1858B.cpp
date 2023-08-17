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
    ll t;
    cin>>t;
    ll len=t;
    while(t--){
    	ll n,m,d,i,j,s=1,z=1e12,k;
    	cin>>n>>m>>d;
    	vector<ll>v;
    	ll a[m+1];
    	for(i=0;i<m;i++){
    		cin>>a[i];
    		if(i==0 && a[i]!=1)v.pb(1);
    		v.pb(a[i]);
    	}
    	v.pb(n+1);
    	ll len=v.size();
    	ll ans=len-1;
    	for(i=1;i<len;i++){
    		ans+=(v[i]-v[i-1]-1)/d;
    	}
    	ll res=0,res2=ans;
    	if(a[0]==1) res=1;
    	for(i=1;i<len-1;i++){
    		ll temp=ans-1;
    		temp-=(v[i]-v[i-1]-1)/d;
    		temp-=(v[i+1]-v[i]-1)/d;
    		temp+=(v[i+1]-v[i-1]-1)/d;
    		//cout<<i<<" "<<res<<" "<<temp<<" "<<res2<<endl;
    		if(temp<res2){res2=temp;res=1;}
    		else if(temp==res2) res++;
    	}
    	cout<<res2<<" "<<res<<"\n";

    }
    return 0;
}