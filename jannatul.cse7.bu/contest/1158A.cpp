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
   		cin>>n>>m;
   		ll a[n],b[m];
   		for(i=0;i<n;i++) {cin>>a[i];s+=a[i];}
   		for(i=0;i<m;i++) cin>>b[i];
   		sort(a,a+n);
   		sort(b,b+m);
   		s*=m;
   		if(b[0]<a[n-1]) {cout<<"-1\n";continue;}
   		for(i=1;i<m;i++){
   			s+=b[i]-a[n-1];
   		} 
   		if(b[0]>a[n-1]) s+=b[0]-a[n-2];
   		cout<<s<<"\n";		
	}
	return 0;
}