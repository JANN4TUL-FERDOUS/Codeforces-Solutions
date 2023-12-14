#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ff first
#define ss second
#define pb push_back
const int N=3e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
ll par[N];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
   	ll t=1;
   	//cin>>t;
   	while(t--){
   		ll n,i,j,k,s=0,m;
   		cin>>n;
   		ll a[n];
   		map<ll,ll>mp;
   		ll ans=0;
   		for(i=0;i<n;i++) cin>>a[i];
   		for(i=0;i<n;i++){
   			for(j=0;j<31;j++){
   				ll x=1<<j;
   				//cout<<x<<" "<<a[i]<<" "<<x-a[i]<<" "<<mp[x-a[i]]<<endl;
   				ans+=mp[x-a[i]];
   			}
   			mp[a[i]]++;
   		}
   		cout<<ans<<"\n";
	}
	return 0;
}