#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=2e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll len=t;
    while(t--){
    	ll n,m,i,j,k,s=0,s2=0;
    	ll a,b,c;
    	cin>>a>>b>>c;
    	s=(a+b)/2;
    	c=(max(a,b)-s+c-1)/c;
    	cout<<c<<"\n";
    	
    }
     return 0;
}