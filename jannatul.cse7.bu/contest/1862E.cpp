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
//vector<ll>g[N];
ll f[N],g[N];
 
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,i,j,s=0,s2=0,z=0,z2=0,x=0,d;
		cin>>n>>m>>d;
		ll a[n];
		ll ans=0,sum=0;
		set<pair<ll,ll>>st;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<0) continue;
			ll x=sum+a[i]-d*(i+1);
			ans=max(ans,x);
			st.insert({a[i],i});
			sum+=a[i];
			z++;
			if(z>=m){
				z--;
				auto x=*(st.begin());
				sum-=x.ff;
				st.erase(x);
			}
			
		}
		cout<<ans<<"\n";
	}
	return 0;
}