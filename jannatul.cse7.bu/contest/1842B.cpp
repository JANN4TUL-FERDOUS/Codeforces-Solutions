#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=1e7+3;
ll mod=1e9+7;
ll dp[1025][1025];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,ans=0,x;
    	cin>>n>>x;
    	ll a[n];
    	ll r=3;
    	if(x==0) ans=1;
    	ll temp=0;
    	while(r--){
    		for(i=0;i<n;i++) {
    			cin>>a[i];
			}
			for(i=0;i<n;i++){
				if((a[i]&x)!=a[i] || a[i]>x) break;
				temp|=a[i];
				if(temp==x) ans=1;
			}   		
    	}
    	if(ans==1) cout<<"YES\n";
    	else cout<<"NO\n";
	   	
    }
    
    return 0;
}