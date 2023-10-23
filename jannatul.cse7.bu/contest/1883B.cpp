#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const ll N=1e6+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
    	ll i,n,m,k,j=0,s=0,x=0;
    	cin>>n>>k;
    	string a;
    	cin>>a;
    	x=n-k;
    	if(x%2) j=1;
    	x/=2;
    	map<char,ll>mp;
    	for(i=0;i<n;i++){
    		mp[a[i]]++;
    	}
    	for(char ch='a';ch<='z';ch++){
    		s+=mp[ch]/2;
    	}
    	if(s>=x) cout<<"YES\n";
    	else cout<<"NO\n";
	}
	return 0;
}