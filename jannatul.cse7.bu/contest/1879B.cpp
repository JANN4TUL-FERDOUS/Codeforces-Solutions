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
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
const ll len=180;
vector<ll>v[N];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,i,j,s=1e12,s2=1e12,z=0,z2=0;
		cin>>n;
		ll a[n],b[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			z+=a[i];
			s=min(s,a[i]);
		}
		for(i=0;i<n;i++){
			cin>>b[i];
			z2+=b[i];
			s2=min(s2,b[i]);
		}
		cout<<min(s*n+z2,s2*n+z)<<"\n";
	}
	return 0;
}