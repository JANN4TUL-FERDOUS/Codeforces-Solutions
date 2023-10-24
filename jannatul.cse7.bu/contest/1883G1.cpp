#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const ll N=2e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
 
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
    	ll i,n,m,k,j,s=0,x=0;
    	cin>>n>>m;
    	ll a[n],b[n];
    	a[0]=1;
    	multiset<ll>st;
    	for(i=1;i<n;i++) cin>>a[i];
    	for(i=0;i<n;i++) {cin>>b[i];st.insert(b[i]);}
    	sort(a,a+n);
    	ll ans=0;
    	for(i=0;i<n;i++){
    		//cout<<i<<" "<<a[i]<<" "<<ans<<endl;
    		auto x=st.upper_bound(a[i]);
    		if(x==st.end())ans++;
    		else st.erase(x);
    	}
    	cout<<ans<<"\n";
	}
	return 0;
}