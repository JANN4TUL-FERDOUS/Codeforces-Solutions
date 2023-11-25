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
   // cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,j,k;
		cin>>n;
		ll a[n+1],ford[n+1],back[n+1];
		ll mx=0;
		for(i=1;i<=n;i++)cin>>a[i];
		ford[0]=-1e12;ford[1]=a[1];
		back[n+1]=-1e12;back[n]=a[n];
		for(i=2;i<=n;i++)ford[i]=max(ford[i-1]+1,a[i]);
		for(i=n-1;i>0;i--)back[i]=max(back[i+1]+1,a[i]);
		ll ans=1e12;
		for(i=1;i<=n;i++){
			ans=min(ans,max({ford[i],back[i+1]+i,back[i],ford[i-1]+n-i+1}));	
		}
		cout<<ans<<"\n";
		
	}
	return 0;
}