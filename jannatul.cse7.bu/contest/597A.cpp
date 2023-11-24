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
    ll t=1;
    //cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k=0,i,j=1,s=0,s2=0;
		ll a,b;
		cin>>k>>a>>b;
		ll l=max(0ll,a),r=max(0ll,b);
		s+=(r/k)-(max(0ll,l-1)/k);
		//cout<<s<<" ";
		l=abs(min(0ll,a)),r=abs(min(0ll,b+1));
		s+=(l/k)-r/k;
		if(a<=0 && b>=0) s++;
		cout<<s<<"\n";
	}
	return 0;
}