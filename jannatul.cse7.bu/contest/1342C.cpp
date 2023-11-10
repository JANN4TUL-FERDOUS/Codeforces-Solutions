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

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t=1;
  	cin>>t;
  	int l=t;
  	while(t--){
  		ll n,i,j,k=0,len,s=0,m;
  		ll a,b,q,l,r;
  		cin>>a>>b>>q;
  		if(a>b) swap(a,b);
  		ll lcm=(a*b)/__gcd(a,b);
  		while(q--){
  			cin>>l>>r;
  			if(a==b) {cout<<"0 ";continue;}
  			ll x=r/lcm;
  			ll ans=(x-1)*b+min(b,r-x*lcm+1);
  			//cout<<ans<<" ";
  			x=(l-1)/lcm;
  			ans-=(x-1)*b+min(b,l-x*lcm);
  			cout<<(r-l+1-ans)<<" ";
  			
  		}
  		cout<<"\n";
	}
	return 0;
}