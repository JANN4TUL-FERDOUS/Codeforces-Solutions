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
vector<ll>v[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,i,j,s=0,s2=0,z=0;
		cin>>n>>m;
		ll a[n],b[m+1];
		for(i=0;i<=m;i++) v[i].clear();
		for(i=0;i<n;i++){
			cin>>a[i];
			v[a[i]].pb(i);
		}
		ll l=n,r=-1;
		for(i=m;i>0;i--){
			b[i]=0;
			if(v[i].size()==0) continue;
			for(auto j:v[i]){l=min(l,j);r=max(r,j);}
			b[i]=(r-l+1)*2;
		}
		for(i=1;i<=m;i++) cout<<b[i]<<" ";
		cout<<"\n";
	}
	return 0;
}