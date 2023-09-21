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
ll vis[N],a[N];
vector<ll>g[N];


int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,i,j,k,s=0,s2=0,z2=0,z=0;
		cin>>n>>k>>s;
		
		if(n<k || k-1>s) cout<<"-1\n";
		else{
			if(s==k) s--;
			z=(k*(k-1))/2;
			z+=s*(n-k);
			cout<<z<<"\n";
		}
			
	}
	return 0;
}