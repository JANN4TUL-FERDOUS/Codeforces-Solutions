#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=5e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
const ll len=400;
vector<ll>v[len],sum[len];
ll a[N],ln;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
   // cin>>t;
    ll tt=t;
    while(t--){
		ll n,m,i,j,z=0;
		cin>>n;
		ll cnt[30]={0};
		for(i=0;i<n;i++){
			ll x,y;
			cin>>x>>y;
			if(x==1) cnt[y]++;
			else{
				for(ll j=29;j>=0;j--){
					z=min(cnt[j],y>>j);
					y-=z<<j;
				}
				if(y==0) cout<<"YES\n";
				else cout<<"NO\n";
			}
		}
	}
	return 0;
}