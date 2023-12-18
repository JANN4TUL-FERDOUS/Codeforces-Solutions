#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<ll, null_type, greater_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
#define ff first
#define ss second
#define pb push_back
const int N=3e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
   	ll t=1;
   	//cin>>t;
   	while(t--){
   		ll i,j,n,k,s=0,m;
   		cin>>n>>k;
   		ordered_set st;
   		ll a[n];
   		for(i=0;i<n;i++){
   			cin>>a[i];
   			if(i) a[i]+=a[i-1];
   			//st.insert(a[i]);
   		}
   		ll ans=0;
   		st.insert(0);
		for(i=0;i<n;i++){  
			ans+=st.order_of_key(a[i]-k);
			st.insert(a[i]);
			//cout<<i<<" "<<ans<<" "<<a[i]<<" "<<a[i]-k<<endl;
   		}
   		cout<<ans<<"\n";
	}
	return 0;
}