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
    //cin>>t;
    ll tt=t;
    
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,j,k,s=0;
		cin>>n;
		n*=2;
		ll a[n];
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		ll ans=1e17;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				vector<ll>v;
				for(k=0;k<n;k++){
					if(k!=i && k!=j)v.pb(a[k]);
				}
				ll sum=0;
				for(k=0;k<n-2;k+=2){
					sum+=v[k+1]-v[k];
				}
				ans=min(ans,sum);
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}