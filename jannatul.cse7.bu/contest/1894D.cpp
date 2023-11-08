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

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	int l=t;
  	while(t--){
  		ll n,i,j,k=0,len,s=0,m;
  		cin>>n>>m;
  		ll a[n],b[m],c[n+m];
  		for(i=0;i<n;i++) cin>>a[i];
  		for(i=0;i<m;i++) cin>>b[i];
  		sort(b,b+m,greater<>());
  		merge(a,a+n,b,b+m,c,greater<>());
  		for(i=0;i<n+m;i++) cout<<c[i]<<" ";
  		cout<<"\n";
	}
	return 0;
}