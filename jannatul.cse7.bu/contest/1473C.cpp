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
   		ll n,i,j,k,s=0;
   		cin>>n>>k;
   		for(i=1;i<2*k-n;i++) cout<<i<<" ";
   		for(i=k;i>=2*k-n;i--) cout<<i<<" ";
   		cout<<"\n";
   	}
	return 0;
}