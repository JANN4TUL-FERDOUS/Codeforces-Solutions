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

ll fn(ll l,ll r){
	if(l>=r) return -1;
	cout<<"? "<<l<<" "<<r<<endl;
	ll z;
	cin>>z;
	return z;
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
  	//cin>>t;    
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,j=0,k,s=0;
		cin>>n;
		ll l=1,r=n;
		ll max=fn(1,n);
		if(max==fn(1,max)){
			while(r-l>1){
				ll mid=(l+r)/2;
				if(max==fn(mid,max)) l=mid;
				else r=mid;
			}
			cout<<"! "<<l<<endl;
		}
		else{
			while(r-l>1){
				ll mid=(l+r)/2;
				if(max==fn(max,mid)) r=mid;
				else l=mid;
			}
			cout<<"! "<<r<<endl;
		}
	}
	return 0;
}