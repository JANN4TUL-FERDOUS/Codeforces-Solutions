#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=1e7+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
ll a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll len=t;
    while(t--){
    	ll n,m,i,j,k,s=1e16,s2=1e17;
    	ll x,y;
    	cin>>n>>x>>y;
    	s=(x*y)/__gcd(x,y);
    	s=n/s;
    	x=(n/x)-s;
    	y=(n/y)-s;
    	ll sum=y*(y+1);
    	sum/=2;
    	s2=(n*(n+1))/2;
    	s2-=((n-x)*(n-x+1))/2;
    	s2-=sum;
    	//cout<<s<<" "<<x<<" "<<y<<" "<<sum<<" "<<s2<<endl;
    	cout<<s2<<"\n";    	
    }
     return 0;
}