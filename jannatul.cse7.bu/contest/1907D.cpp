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

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	ll n,i,j,s=0;
    	cin>>n;
    	ll l=0,r=1e9,x=0;
    	pair<ll,ll>a[n];
    	for(i=0;i<n;i++) cin>>a[i].ff>>a[i].ss;
    	ll ans=0;
    	while(l<=r){
    		ll mid=(l+r)/2;
    		ll mx=0,mn=0,x=0;
    		for(i=0;i<n;i++){
    			mn-=mid;
    			mx+=mid;
    			mn=max(mn,a[i].ff);
    			mx=min(mx,a[i].ss);
    			if(mn>mx){x=1;break;}
    		}
    		if(x==1){
    			l=mid+1;
    		}
    		else{
    			r=mid-1;
    			ans=mid;
    		}
    	}
    	cout<<ans<<"\n";
    	
    }
	return 0;
}