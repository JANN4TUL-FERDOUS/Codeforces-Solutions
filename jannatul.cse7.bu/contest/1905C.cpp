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
   	ll t=1;
   	cin>>t;
   	while(t--){
   		ll i,j,n,k,s=0,m;
   		cin>>n;
   		string a,b;
   		cin>>a;
   		vector<ll>v;
   		for(i=n-1;i>=0;i--){
   			if(i==n-1 || a[i]>=a[v.back()]) v.pb(i);
   		} 
   		reverse(v.begin(),v.end());
   		ll len=v.size();
   		ll ans=len;
   		for(i=0;i<len;i++){
   			if(a[v[i]]==a[v[0]]) ans--;
   		} 
   		for(i=0;i<len-1-i;i++)swap(a[v[i]],a[v[len-1-i]]);
   		if(is_sorted(a.begin(),a.end())) cout<<ans<<"\n";
   		else cout<<"-1\n";			
	}
	return 0;
}