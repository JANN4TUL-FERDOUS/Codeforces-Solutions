#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=2e5+7;
ll mod=998244353;
int ax[8]={0,0,-1,+1,-1,-1,1,1};
int ay[8]={-1,1,0,0,-1,1,-1,1};
int kx[8]={2,2,-2,-2,1,1,-1,-1};
int ky[8]={1,-1,1,-1,2,-2,2,-2};
//const ll len=180;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
	cin>>t;
   	int tt=t;
    while(t--){
		ll n,m,i,j,ans=0,start=0;
		cin>>n;
		ll k[n],h[n];
		pair<ll,ll>p[n];
		vector<pair<ll,ll>>v;
		for(i=0;i<n;i++)cin>>k[i];
		for(i=0;i<n;i++){
			cin>>h[i];
			p[i]={k[i]-h[i]+1,k[i]};
		}
		sort(p,p+n);
		ll l=p[0].ff,r=p[0].ff;
		for(i=0;i<n;i++){
			if(p[i].ff<=r){
				if(r<p[i].ss) r=p[i].ss;
			}
			else{
				v.pb({l,r});
				l=p[i].ff;
				r=p[i].ss;
			}
		}
		v.pb({l,r});
		for(auto i:v){
			ll x=(i.ss-i.ff+2)*(i.ss-i.ff+1);
			//cout<<x<<" ";
			ans+=x/2;
		}
		cout<<ans<<"\n";
	}
	return 0;
}