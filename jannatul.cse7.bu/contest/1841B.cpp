#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=1e5;
ll mod=1e9+7;
//ll bt[N][N];
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,s=0,s2=0,ans=0,res=0,temp=0,mn,k;
    	cin>>n;
    	ll a[n];
    	vector<ll>v;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		if(i==0){
    			s=a[i];
    			v.pb(1);
    		}
    		else{
    			if(a[i]>=s){
    				if((s2==0 ||(s2==1 && a[i]<=a[0]))) {
    					s=a[i];
    					v.pb(1);
    				}
    				else v.pb(0);
    			}
    			else{
    				if(s2==0 && a[i]<=a[0]) {v.pb(1);s=a[i];s2=1;}
    				else v.pb(0);
    			}
    			
    		}
    	}
    	for(i=0;i<n;i++) cout<<v[i];
    	cout<<"\n";
    	
    }
	return 0;
}