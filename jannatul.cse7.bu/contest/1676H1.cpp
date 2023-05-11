#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;


const int N=3e5+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	int l=t;
	while(t--){
		//cout<<"Case :"<<l-t<<": ";
		ll n,i,j,s=0,s2=0,ans=0;
		cin>>n;
		ll a[n+1],b[n];
		ordered_set st;
		map<ll,ll>mp;
		for(i=1;i<=n;i++){
			cin>>a[i];
			b[i-1]=a[i];
		}
	//	sort(b,b+n);
		s=0;
		for(i=1;i<=n;i++){
			if(st.size()>0){				
				ll z=st.order_of_key(a[i]);
				s+=st.size()-z;
				
			}
			st.insert(a[i]);
			//cout<<st.size()<<" ";
			
		}
		cout<<s<<"\n";
	}
	return 0;
}