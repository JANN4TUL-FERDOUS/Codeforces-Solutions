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
ll num=1e17;
ll b[N+1];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
    	ll n,m,i,j,k,s=0,z=0,z2=0;
    	cin>>n;
    	vector<ll>v;
    	v.pb(n);
    	while(n>1){
    		ll x=n;
    		z=1;
    		while(x%2==0) {z*=2;x/=2;}
    		if(x==1) break;
    		n-=z;
    		v.pb(n);
    	}
    	z/=2;
    	while(z>=1){
    		v.pb(z);
    		z/=2;
    	}
    	cout<<v.size()<<"\n";
    	for(i=0;i<(int)v.size();i++) cout<<v[i]<<" ";
    	cout<<"\n";
    }
    return 0;
}