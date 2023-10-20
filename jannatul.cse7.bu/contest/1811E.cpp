#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=1e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
bitset<N>bt;
vector<ll>g[N];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
    	ll i,n,m,k,j,s=0,x=0;
    	cin>>n;
    	vector<ll>v;
    	while(n){
    		if(n%9<4) v.pb(n%9);
    		else v.pb(1+n%9);
    		n/=9;
    	}
    	for(i=(int)v.size()-1;i>=0;i--) cout<<v[i];
    	cout<<"\n";
    }
    return 0;
}