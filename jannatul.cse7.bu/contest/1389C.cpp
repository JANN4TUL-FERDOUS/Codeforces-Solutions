#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=1e7+3;
ll mod=1e9+7;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,s=0,k,z,ans=0;
	   	string a;
	   	cin>>a;
	   	n=a.length();
	   	map<char,ll>mp;
	   	for(i=0;i<n;i++){
	   		mp[a[i]]++;
	   		ans=max(ans,mp[a[i]]);
	   	}
	   	for(i=0;i<10;i++){
	   		for(j=0;j<10;j++){
	   			char c='0'+i,d='0'+j;
   				if(i==j || mp[c]==0 || mp[d]==0) continue;
	   			k=0;
	   			for(ll l=0;l<n;l++){
	   				if((k%2==0 && a[l]==c) || (k%2 && a[l]==d)) k++;	
	   			}
	   			//cout<<c<<" "<<d<<" "<<s<<" "<<k<<" "<<ans<<endl;
	   			if(k%2) k--;
	   			ans=max(ans,k);	
   			}
	   	}
	   	cout<<n-ans<<"\n";
    }    
    return 0;
}