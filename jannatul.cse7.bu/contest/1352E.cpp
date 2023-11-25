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
		ll  n,m,i,j,k,x=0;
		cin>>n;
		ll a[n],mp[n+1]={0};
		for(i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		ll ans=0;
		for(i=0;i<n-1;i++){
			ll sum=0;
			for(j=i;j<n;j++){
				sum+=a[j];
				if(j==i) continue;
				if(sum>n) break;
				ans+=mp[sum];
				mp[sum]=0;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}