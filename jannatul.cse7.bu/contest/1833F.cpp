#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define  pb push_back
const int N=2e5+7;
const ll mod=1e9+7;
ll arr[N];
ll bigmod(ll x,ll p){
	if(p==0) return 1ll;
	if(p==1) return x;
	if(p%2) return ((bigmod(x,p-1)%mod)*(x%mod))%mod;
	else{
		ll res=bigmod(x,p/2);
		return ((res%mod)*(res%mod))%mod;
	}
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	arr[0]=1;
	for(int i=1;i<N;i++) arr[i]=(arr[i-1]*i)%mod;
	while(t--){
		ll n,k,i,j,s=0,s2=0,z=0,s3=0,m,ans=0;
		cin>>n>>m;
		ll a[n],b[n];
		vector<ll>v;
		map<ll,ll>mp,mp2,m3;
		for(i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
			if(mp[a[i]]==1) v.push_back(a[i]);
		}
		sort(v.begin(),v.end());
		b[0]=0;
		ll l=v.size();
		z=1;
		for(i=0;i<l;i++){
			z*=mp[v[i]];
			z%=mod;
			b[i]=z;
		}
		for(i=0;i<=l-m;i++){
			ll z2=lower_bound(v.begin(),v.end(),v[i]+m)-v.begin();
			z=i;z2--;
			ll add=b[z2];
			if(z>0) {
				add=(add*(bigmod(b[z-1],mod-2)%mod))%mod;
			}
			ll r=z2-z+1;
			if(r<m)  continue;
			if(z+m>l) break;		
			s2=r-m;
	        s3=(arr[s2]*arr[m])%mod;
	        s=arr[r];
	        ll res=(s*(bigmod(s3,mod-2)%mod))%mod;
	        ans+=(res*add)%mod;
	        ans%=mod;		    			
		}	
		cout<<ans<<"\n";		
	}
	return 0;
}