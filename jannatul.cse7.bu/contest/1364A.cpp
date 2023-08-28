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
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,k,s=0,z=-1,z2=0;
    	cin>>n>>k;
		ll a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
			if(s%k) z=max({z,i+1,n-i-1});
		}
		cout<<z<<"\n";
    }
    return 0;
}