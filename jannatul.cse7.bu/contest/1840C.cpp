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
    	cin>>n>>p>>k;
    	ll a[n];
    	vector<ll>v;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		if(a[i]<=k)s++;
    		else{
    			if(s>=p) v.push_back(s);
    			s=0;
    		}
    	}
    	if(s>=p) v.push_back(s);
    	for(i=0;i<(int)v.size();i++){
    		s=v[i]-p+1;
    		s*=v[i];
    		ll x=((v[i]-1)*v[i])/2;
    		//cout<<p<<" "<<s<<" "<<v[i]<<" "<<x<<endl;
    		x-=((p-2)*(p-1))/2;
    		
    		s-=x;
    		ans+=s;
    	
    	}
    	cout<<ans<<"\n";
    }
	return 0;
}