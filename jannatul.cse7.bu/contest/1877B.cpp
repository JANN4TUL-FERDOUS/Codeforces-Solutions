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


int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    int tt=t;
    while(t--){
		ll n,i,j,sum=0,p,z;
		cin>>n>>p;
		ll a[n],b[n],c[n]={0};
		pair<ll,ll>v[n+1];
		for(i=0;i<n;i++)cin>>v[i].ss;
		for(j=0;j<n;j++) cin>>v[j].ff;
		v[n]={p,n+10};
		sort(v,v+n+1);
		j=n+10;
		ll cost=p,ans=p,k=0;
		j=0;i=1;
		//cout<<p<<" "<<v[0].ff<<endl;
		if(p<=v[0].ff) {cout<<p*n<<"\n";continue;}
		while(i<n){
			//cout<<i<<" "<<ans<<endl;
			ans+=min(n-i,v[j].ss)*v[j].ff;
			i+=v[j].ss;
			j++;
			//cout<<i<<" "<<ans<<endl;			
		}
		cout<<ans<<"\n";
	}
	return 0;
}