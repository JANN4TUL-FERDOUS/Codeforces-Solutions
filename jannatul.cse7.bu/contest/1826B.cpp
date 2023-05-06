#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+7;
const ll mod=998244353;
//ll dp[N][N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	ll n,i,j,s=0;
    	cin>>n;
    	ll a[n];
    	vector<ll>v;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    	}
    	for(int i=0;i<n/2;i++){
    		if(a[i]==a[n-i-1]) continue;
    		else{
    			v.push_back(abs(a[i]-a[n-i-1]));
    		}
    	}
    	s=0;
    	for(i=0;i<(int)v.size();i++){
    		//cout<<v[i]<<" "<<s<<endl;
    		if(i==0) s=v[i];
    		else s=__gcd(s,v[i]);
    	}
    	cout<<s<<"\n";
	}
	return 0;
}