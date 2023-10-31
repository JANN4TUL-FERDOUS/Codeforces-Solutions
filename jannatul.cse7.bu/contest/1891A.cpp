#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 const ll N=1e6+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
    	ll i,n,m,k,j,mn=1e9,mx=-1e9;
    	cin>>n;
    	ll a[n+1];
    	for(i=1;i<=n;i++){
    		cin>>a[i];
    	}
    	j=4;
    	ll z=0;a[0]=0;
    	i=1;
    	for(i=3;i<n;i++){
    		if(a[i]>a[i+1]){z=1;break;}
    		if(i==j-1){i++;j*=2;}
    	}
    	if(z==1) cout<<"NO\n";
    	else cout<<"YES\n";
	}
	return 0;
}