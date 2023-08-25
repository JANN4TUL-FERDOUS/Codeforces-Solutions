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
    	ll l=1,r=10000000000;
    	while(l<=r){
    		ll mid=(l+r)/2;
    		ll x=mid*(mid-1);
    		x/=2;
    		if(x>=n){
    			ans=mid;
    			r=mid-1;
    		}
    		else l=mid+1;
    	}
    	//cout<<ans<<" ";
    	if(n<(ans*(ans-1))/2){
    		ll x=ans-1;
    		ans--;
    		ans+=n-(x*(x-1))/2;
    	}
    	cout<<ans<<"\n";
    }
    return 0;
}