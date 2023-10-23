#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define ff first
#define ss second
#define pb push_back
 
const ll N=1e6+7;
ll mod=1e9+7;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
    	ll i,n,m,k,j,s=0,x=0;
    	cin>>n;
    	ll a[n];
    	ll ans=0;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		if(i==0) continue;
    		ll x=a[i],y=a[i-1];
    		while(x<a[i-1]) {s++;x*=2;}
    		while(a[i]>=y*2 && s){s--;y*=2;}
    		ans+=s;
    	}
    	cout<<ans<<"\n";
	}
	return 0;
}