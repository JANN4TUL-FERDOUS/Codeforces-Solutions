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

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	ll n,i,j,s=0;
    	cin>>n;
    	string a;
    	cin>>a;
    	vector<ll>v;
    	map<char,ll>mp;
    	for(i=0;i<n;i++){
    		mp[a[i]]++;
    		s=max(s,mp[a[i]]); 		
    	}
    	ll ans=0;
    	if(n%2) ans=1;
    	if(s*2>n){
    		ans=s*2-n;
    	}
    	cout<<ans<<"\n";
    }
	return 0;
}