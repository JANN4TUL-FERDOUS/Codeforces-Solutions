#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=2e6+7;
ll mod=998244353;
int ax[8]={0,0,-1,+1,-1,-1,1,1};
int ay[8]={-1,1,0,0,-1,1,-1,1};
int kx[8]={2,2,-2,-2,1,1,-1,-1};
int ky[8]={1,-1,1,-1,2,-2,2,-2};
//const ll len=180;
double fn(pair<ll,ll>x,pair<ll,ll>y){
 	ll z=x.ff-y.ff;
 	z*=z;
	ll z2=x.ss-y.ss;
	z2*=z2;
	double ans=(z+z2)*1.0;
	return sqrt(ans); 
 }
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    int tt=t;
    while(t--){
		ll n,i,j,sum=0,z,m,k,z2;
		pair<ll,ll>p[4];
		cin>>p[0].ff>>p[0].ss>>p[1].ff>>p[1].ss>>p[2].ff>>p[2].ss;
		double ans;
		cout <<fixed <<setprecision(10);
		ans=max(fn(p[1],p[0]),fn(p[1],{0,0}));
		ans=min(ans,max(fn(p[2],p[0]),fn(p[2],{0,0})));
		ans=min(ans,max({fn(p[1],p[2])/2.0,fn(p[1],p[0]),fn(p[2],{0,0})}));
		ans=min(ans,max({fn(p[1],p[2])/2.0,fn(p[2],p[0]),fn(p[1],{0,0})}));
		cout<<ans<<"\n";
	}
	return 0;
}