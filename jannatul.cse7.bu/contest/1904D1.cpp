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
   		cin>>n;
   		ll a[n],b[n];
   		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n;i++)cin>>b[i];
		for(i=0;i<n;i++){
			ll z=0;
			for(j=i;j<n;j++){
				if(a[j]==b[i]){z=1;break;}
				if(a[j]>b[i])break;
				if(b[j]<b[i]) break;				
			}
			for(j=i;j>=0;j--){
				if(a[j]==b[i]){z=1;break;}
				if(a[j]>b[i])break;
				if(b[j]<b[i]) break;	
			}
			if(z==0) {s=1;break;}
		}
		if(s==1) cout<<"NO\n";
		else cout<<"YES\n";
   	}
	return 0;
}