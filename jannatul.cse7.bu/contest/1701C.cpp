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
const ll len=180;
ll a[N];
ll dp[N][3];
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k,x=0,y,i,j=0,s=0,s2=0,z=0,base=1,ans=0;
		cin>>n>>m;
		ll a[m],b[n]={0};
		for(i=0;i<m;i++){
			cin>>a[i];
			b[a[i]-1]++;
		}
		ll l=1,r=m*2;
		while(l<=r){
			ll mid=(l+r)/2;
			s=0;
			for(i=0;i<n;i++){
				if(mid>b[i])s+=(mid-b[i])/2;
				else s-=(b[i]-mid);
			}
			if(s>=0) {ans=mid;r=mid-1;}
			else l=mid+1;
		}
		cout<<ans<<"\n";
		
	}
	return 0;
}