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
string a[1000];
ll ans=0,n,m;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
   	ll t=1;
   	//cin>>t;
   	while(t--){
   		ll i,j,k,s=0;
   		cin>>n>>k;
   		ll a[n];
   		for(i=0;i<n;i++) cin>>a[i];
   		sort(a,a+n);
   		ll ans=a[n/2];
   		//s=1;
   		ll sum=ans;
   		for(i=n/2+1;i<n;i++){
   			if(a[i]*(i-n/2)-sum>k){
   				ans=(k+sum)/(i-n/2);
   				s=1;
   				break;
   			}
   			sum+=a[i];
		}
		//cout<<ans<<" ";
		if(s==0) ans=(k+sum)/(n-n/2);
		cout<<ans<<"\n";
   			
	}
	return 0;
}