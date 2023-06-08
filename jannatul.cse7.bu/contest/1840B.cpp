#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=1e6+7;
ll mod=1e9+7;
ll a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	ll n,i,j,s=0,s2=0,z=0,k,p,ans=0;
    	cin>>n>>k;
    	ll a[n];
    	k=min(k,30ll);
    	z=1<<k;
    	//cout<<(1<<30)<<" "<<(1<<31)<<endl;
    	cout<<min(z,n+1)<<"\n";
    	
    }
	return 0;
}