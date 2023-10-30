#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=3e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

vector<ll>order,com;
bitset<N>bt;
ll a[N];
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k,i,j=0,s=0,s2=0;
		cin>>n>>m;
		ll a[n];
		for(i=0;i<n;i++)cin>>a[i];
		ll sum=a[0];j=0;
		for(i=1;i<n;i++){
			if(sum+a[i]>=(i+1)*m){
				while(j<i)sum+=a[++j]; 
			}
		}
		if(j==n-1) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}