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
ll back[N+1],frow[N+1];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k,i,j=-1,s=0,s2=0,s3=0,z=0,z2=0;
		cin>>n;
		pair<ll,ll>p[n];
		ll mp[n+1];
		for(i=0;i<n;i++) cin>>p[i].ff;
		for(i=0;i<n;i++) cin>>p[i].ss;
		sort(p,p+n);
		for(i=1;i*i<=2*n;i++){
			for(j=0;j<=n;j++) mp[j]=0;
			for(j=0;j<n;j++){
				ll x=p[j].ff*i-p[j].ss;
				if(x>=1 && x<=n) s+=mp[x];
				if(i==p[j].ff) mp[p[j].ss]++;
			}
		}
		cout<<s<<"\n";
	}
	return 0;
}