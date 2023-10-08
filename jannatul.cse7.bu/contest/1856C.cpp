#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=2e6+7;
ll mod=998244353;
int ax[8]={0,0,-1,+1,-1,-1,1,1};
int ay[8]={-1,1,0,0,-1,1,-1,1};
int kx[8]={2,2,-2,-2,1,1,-1,-1};
int ky[8]={1,-1,1,-1,2,-2,2,-2};
//const ll len=180;
vector<pair<ll,ll>>v;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,i,j,s=0,s2=0,z=0,z2=0,x=0,k;
		cin>>n>>k;
		ll a[n];
		for(i=0;i<n;i++)cin>>a[i];
		ll ans=0,cnt=0;
		for(i=0;i<n;i++){
			ll l=1,r=1e12;
			while(l<=r){
				ll mid=(l+r)/2;
				cnt=0;s=0;
				for(j=0;j+i<n;j++){
					cnt+=max(0ll,mid-a[j+i]-j);
					//cout<<i<<" "<<j<<" "<<a[i+j]+j<<" "<<mid<<" "<<cnt<<" "<<ans<<"\n";
					if(a[j+i]+j>=mid){s=1;break;}
					if(cnt>k) {break;}
				}
				if(s==1){
					ans=max(ans,mid);
					l=mid+1;
				}
				else r=mid-1;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}