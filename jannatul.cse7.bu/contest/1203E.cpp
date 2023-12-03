#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ff first
#define ss second
#define pb push_back
 
const int N=5e5+7;
ll mod=998244353;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};


int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;
    ll tt=t;
    
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,j,k,s=0;
		cin>>n;
		ll a[n];
		map<ll,ll>mp,mp2;
		for(i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
			mp2[a[i]]++;
		}
		sort(a,a+n);
		ll ans=0;
		for(i=n-1;i>=0;){
			ll j=mp2[a[i]];
			if(mp[a[i]+1]==0 && a[i]+1<=150001){
				ans++;
				mp[a[i]]--;
			}
			if(mp[a[i]]>0) ans++;
			if(mp[a[i]]>1 && a[i]>1) {
				if(mp[a[i]-1]==0) ans++;
				mp[a[i]-1]++;
			}			
			i-=mp2[a[i]];
		}
		cout<<ans<<"\n";
		
	}
	return 0;
}