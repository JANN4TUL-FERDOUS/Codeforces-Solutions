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
vector<ll>g[N];
ll a[N],b[N];
ll dp[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,i,j,s=1,z=0;
	cin>>n;
	vector<ll>v;
	for(i=0;i<n;i++) {
		cin>>j;
		auto it=lower_bound(v.begin(),v.end(),j);
		if(it==v.end()) v.pb(j);
		else *it=j;
	}
	cout<<v.size()<<"\n";
	
    return 0;
}