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
    ll n,m,i,j,s=0,s2=0;
    cin>>n>>m;
    ll a[n],b[m];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<m;i++) cin>>b[i];
    ll l=0,r=1e18;
    ll ans=0;
    ll k=0;
    while(l<=r){
    	ll mid=(l+r)/2;
    	ll mx=-1e12,id=0,z=0;
    	for(i=0;i<m;i++){
    		if(a[id]>mx && abs(a[id]-b[i])>mid)continue;
    		mx=b[i]+mid;
    		id=upper_bound(a,a+n,mx)-a;
    		if(id>=n) break;
    	}
    	if(id<n) z=1;
    	//cout<<k++<<" "<<z<<" "<<id<<" "<<l<<" "<<r<<" "<<mid<<endl;
    	if(z==1) l=mid+1;
    	else {ans=mid;r=mid-1;}
    }
    cout<<ans<<"\n";
    return 0;
}