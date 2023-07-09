#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=1e6+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
ll arr[N];
vector<ll>g[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,d,h,i,j,s=0,z=0;
    	cin>>n>>d>>h;
    	ll a[n];
    	for(i=0;i<n;i++) cin>>a[i];
    	sort(a,a+n);
    	double ans=n*d*h*.5;
    	//cout<<ans<<" ";
    	for(j=1;j<n;j++){
    		double x=a[j]-a[j-1];
    		if(x<h){
    			x=h-x;
    			ans-=((x*d)/(h*1.0))*.5*x;
    		}
    	}
    	printf("%.6lf\n",ans);
	}
	return 0;
}