#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=100;
ll mod=1e9+7;
ll bt[N][N];
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,l,r,s=0,s2=0;
    	ll m,k;
    	cin>>n>>m>>k;
    	k-=2;
    	if(k<0 || m<n-1 || m>(n*(n-1))/2) cout<<"NO\n";
    	else if(n>1 && ((m<(n*(n-1))/2 && k<2) || (m==(n*(n-1))/2 && k<1))) cout<<"NO\n";
    	else cout<<"YES\n";
    }
	return 0;
}