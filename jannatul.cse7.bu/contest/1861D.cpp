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
vector<ll>g[N];
ll a[N],b[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,s=1e9,s2=0,z=0;
    	cin>>n;
    	ll a[n];
    	vector<ll>v(n+1),v2(n+1);
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		v[i+1]=v[i];
    		if(i>0 && a[i]>=a[i-1]) {v[i+1]+=1;}
    		//cout<<i<<" "<<v[i]<<" "<<v[i+1]<<"\n";
    	}
    	for(i=n-2;i>=0;i--){
    		v2[i]=v2[i+1];
    		if(a[i]>=a[i+1]) v2[i]+=1;
    	}
    //	cout<<v[n]<<" "<<v2[0]<<endl;
    	s=v2[0];
    	for(i=0;i<n;i++){
    		//cout<<i<<" "<<v2[i]<<" "<<v[i]<<endl;
    		s=min(s,v2[i]+v[i]+1);
    	}
    	cout<<s<<"\n";
    }
    return 0;
}