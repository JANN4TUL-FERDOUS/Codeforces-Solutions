#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=5e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		ll n,m,i,j,k,z=0,s=0;
		cin>>n>>k;
		ll a[n],b[n];
		ll ans=0,mx=0;
		set<ll>st;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++) cin>>b[i];
		for(i=0;i<n;i++){
			if(k<=0) break;
			s+=a[i];
			k--;
			st.insert(b[i]);
			ans=max(ans,s+k*(*st.rbegin()));
		}
		cout<<ans<<"\n";
	}
	return 0;
}