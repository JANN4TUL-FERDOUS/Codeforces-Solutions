#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=1e5;
ll mod=1e9+7;
bitset<N>bt;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
string a;

ll fn(ll mid){
	ll s=0,str=0,str2=0,z=0,poc=0,poc2=0,prev=0;
	set<ll>st;
	//cout<<mid<<" ";
	for(ll i=0;i<a.length();i++){
		//cout<<i<<" "<<a[i]<<" "<<st.size()<<endl;
		if(a[i]=='*'){
			//cout<<i<<" "<<poc2<<" "<<i-poc2+prev<<" "<<2*(i-poc2-prev)+prev<<endl;
			if(poc==0 || (i-poc2+prev>mid && 2*(i-poc2-prev)+prev>mid)) st.insert(i);
		}
		else if(a[i]=='P'){
			poc=1;poc2=i;s=0;prev=0;
			if(!st.empty()){
				ll x=*st.lower_bound(max(0ll,i-mid));
				//cout<<x<<" "<<st.size()<<" "<<i-mid<<endl;
				if(x!=*st.end()){
					poc2=x;st.erase(x);s=1;prev=i-x;
					//cout<<"pos "<<poc2<<" ";
					while(!st.empty()){
						ll x=*st.lower_bound(max(0ll,i-mid));
						if(x==*st.end()) break;
						st.erase(x);
					}
				}
			}
		}
	}
	//cout<<endl<<st.size()<<endl;
	return st.empty();
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,ans=1e9;
    cin>>n;
    cin>>a;
    ll l=0,r=2*n;
    while(l<=r){
    	ll mid=(l+r)/2;
    	//cout<<l<<" "<<r<<" "<<mid<<" "<<fn(mid)<<endl;
    	if(fn(mid)){
    		r=mid-1;
    		ans=mid;
    	}
    	else l=mid+1;
    }
    cout<<ans<<"\n";
    return 0;
}