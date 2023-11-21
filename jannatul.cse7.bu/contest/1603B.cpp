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
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,k,s=0,z=0,z2=0;
    	ll x,y;
    	cin>>x>>y;
    	if(x>y) cout<<x+y<<"\n";
    	else{
    		z=y%x;
    		cout<<y-(z+1)/2<<"\n";
    	}
    }
    return 0;
}