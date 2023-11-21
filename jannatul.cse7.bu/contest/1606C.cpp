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
    cin>>t;
    ll tt=t;
    ll pw[12];
    pw[0]=1;
    for(ll i=1;i<11;i++) pw[i]=pw[i-1]*10;    
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k=0,i,j=1,s=0,s2=0;
		cin>>n>>k;
		ll a[n];
		for(i=0;i<n;i++) cin>>a[i];
		ll ans=0;
		k++;
		for(i=1;i<n;i++){
			ll z=min(k,pw[a[i]]/pw[a[i-1]]-1);
			//cout<<z<<" "<<k<<" "<<ans<<"\n";
			ans+=z*pw[a[i-1]];
			k-=z;
		}
		if(k) ans+=pw[a[n-1]]*k;
		cout<<ans<<"\n";
	}
	return 0;
}