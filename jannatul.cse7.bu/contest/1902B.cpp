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
    cin>>t;
    
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,j,k,s=0;
		ll p,l,tt;
		cin>>n>>p>>l>>tt;
		ll task=(n+6)/7;
		s=task*tt+((task+1)/2)*l;
		if(s<=p){
			cout<<max(0ll,n-(task+1)/2-(p-s-1+l)/l)<<"\n";
		}
		else{
			ll s=l+2*tt;
			ll ans=0;
			cout<<max(0ll,n-(p+s-1)/s)<<"\n";
		}
	}
	return 0;
}