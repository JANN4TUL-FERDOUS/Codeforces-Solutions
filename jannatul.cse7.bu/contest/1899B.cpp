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
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k=0,i,j=0;
		cin>>n;
		ll a[n+1];
		a[0]=0;
		for(i=1;i<=n;i++) {
			cin>>a[i];
			a[i]+=a[i-1];
		}
		ll ans=0;
		for(i=1;i<=n;i++){
			ll mx=0,mn=1e18;
			if(n%i) continue;
			for(j=i;j<=n;j+=i){
				mx=max(mx,a[j]-a[j-i]);
				mn=min(mn,a[j]-a[j-i]);
				//cout<<i<<" "<<j<<" "<<mx<<" "<<mn<<"\n";
				//cout<<"2nd "<<j-i<<" "<<mx-mn<<endl;
			}
			ans=max(ans,mx-mn);
		}
		cout<<ans<<"\n";
	}
	return 0;
}