#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=1e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t=1;
  	cin>>t;
  	int l=t;
  	ll arr[1007];
  	for(ll i=1;i<=1001;i++) arr[i]=i;
  	for(ll i=2;i<1001;i++){
  		if(arr[i]!=i)continue;
  		for(ll j=i*i;j<1001;j+=i) arr[j]=min(arr[j],i);
  	}
  	while(t--){
  		ll n,i,j,k=0,len,s=1,m;
  		cin>>n;
  		ll a[n];
  		map<ll,ll>mp,mp2;
  		for(i=0;i<n;i++){
  			cin>>a[i];
  			mp[arr[a[i]]]++;
  			if(mp[arr[a[i]]]==1){
  				mp2[arr[a[i]]]=s++;
  			}
  		}
  		cout<<s-1<<"\n";
  		for(i=0;i<n;i++) cout<<mp2[arr[a[i]]]<<" ";
  		cout<<"\n";
	}
	return 0;
}