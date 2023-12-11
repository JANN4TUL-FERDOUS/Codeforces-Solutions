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
ll par[N];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
   	ll t;
   	cin>>t;
   	while(t--){
   		ll n,i,j,k,s=0,mn=1e18;
   		cin>>n>>k;
   		ll a[n],b[n];
   		for(i=0;i<n;i++) {
   			cin>>a[i];
   			b[i]=a[i]; 
   			mn=min(mn,a[i]);  			
   		}
   		if(k>=3) {cout<<"0\n";continue;}
   		sort(b,b+n);
   		for(i=1;i<n;i++){
   			mn=min(mn,b[i]-b[i-1]);
   		}
   		if(k==1) {cout<<mn<<"\n";continue;}
		for(i=1;i<n;i++){
			for(j=0;j<i;j++){
				ll val=b[i]-b[j];
				ll x=lower_bound(b,b+n,val)-b;
				if(x<n) mn=min(mn,b[x]-val);
				if(x>0) mn=min(mn,val-b[x-1]);
			}
		}
		cout<<mn<<"\n";   		
   	}
	return 0;
}