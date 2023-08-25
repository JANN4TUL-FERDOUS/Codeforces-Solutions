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
 
ll b[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
    	ll n,i,j,m,k,z=0,s=0,z2=0,ans=0;
    	cin>>n;
    	ll a[n];
    	map<ll,ll>mp;
    	for(i=0;i<n;i++) {cin>>a[i];mp[a[i]]++;}
    	for(i=0;i<n;i++){
    		//cout<<i<<" "<<i+mp[a[i]]<<" "<<a[i]<<" "<<mp[a[i]]+i<<" "<<a[a[i]-1]<<endl;
    		if(a[i]>n || a[a[i]-1]!=mp[a[i]]+i){s=1;break;}
    		i+=mp[a[i]]-1;
    	}
    	if( s==1) cout<<"NO\n";
    	else cout<<"YES\n";
    }
    return 0;
}