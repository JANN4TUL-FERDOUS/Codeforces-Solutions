#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
    	ll i,n,m,k,j,s=0;
    	cin>>n;
    	ll a[n],b[n]={0};
    	map<ll,ll>mp,mp2;
    	set<ll>st;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		st.insert(a[i]);
    		b[i]=st.size();
    	}
    	for(i=n-1;i>=0;i--){
    		if(mp[a[i]]==0) s+=b[i];
    		mp[a[i]]++;
    	}
    	cout<<s<<"\n";
	}
	return 0;
}