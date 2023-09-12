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
		ll n,m,k,i,j=-1,s=0,s2=0,s3=0,z=0,z2=0;
		ll a,b;
		cin>>n>>k>>a>>b;
		ll x[n+1],y[n+1];
		for(i=1;i<=n;i++) cin>>x[i]>>y[i];
		s=abs(x[a]-x[b])+abs(y[a]-y[b]);
		s2=s;s3=s;
		for(i=1;i<=k;i++){
			s2=min(s2,abs(x[a]-x[i])+abs(y[a]-y[i]));
			s3=min(s3,abs(x[b]-x[i])+abs(y[b]-y[i]));
			//cout<<i<<" "<<s2<<" "<<abs(x[a]-x[i])<<" "<<abs(y[a]-y[i])<<endl;
		}
		cout<<min(s,s2+s3)<<"\n";
		
	}
	return 0;
}