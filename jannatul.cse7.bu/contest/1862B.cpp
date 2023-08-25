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
    	cin>>n;
    	ll a[n];
    	vector<ll>v;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    	}
    	for(i=0;i<n;i++){
    		//cout<<i<<" "<<v[i]<<" "<<v.size()<<endl;
    		if(i==0) v.pb(a[i]);
    		else if(a[i]>=a[i-1])v.pb(a[i]);
    		else {
    			v.pb(a[i]);v.pb(a[i]);}
    	}
    	ll len=v.size();
    	cout<<len<<"\n";
    	for(i=0;i<len;i++) cout<<v[i]<<" ";
    	cout<<"\n";
    }
    return 0;
}