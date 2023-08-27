#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=2e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};

ll b[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
    	ll n,i,j,m,k,z=0,s=0,z2=0,ans=0;
    	ll x,y;
    	cin>>x>>y>>n;
    	ll d=(n*(n-1))/2;
    	//cout<<x<<" "<<n<<" "<<x+d<<" "<<y<<endl;
    	if(x+d>y) cout<<"-1\n";
    	else{
    		vector<ll>v;
    		for(i=0;i<n-1;i++){
    			v.pb(y-i);
    			y-=i;
    		}
    		v.pb(x);
    		for(i=n-1;i>=0;i--) cout<<v[i]<<" ";
    		cout<<"\n";
    	}
    }
    return 0;
}