#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=1e6+7;
ll mod=998244353;
int ax[8]={0,0,-1,+1,-1,-1,1,1};
int ay[8]={-1,1,0,0,-1,1,-1,1};
int kx[8]={2,2,-2,-2,1,1,-1,-1};
int ky[8]={1,-1,1,-1,2,-2,2,-2};
//const ll len=180;
vector<pair<ll,ll>>v;
ll arr[N];
void seive(){
	ll i,j;
	for(i=1;i<N;i++) arr[i]=i;
	for(i=2;i<N;i++){
		if(arr[i]!=i) continue;
		for(j=i*i;j<N;j+=i) arr[j]=min(arr[j],i);
	}
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
	cin>>t;
   	int tt=t;
    seive();
    while(t--){
		ll n,m,i,j,ans=0;
		cin>>n;
		ll a[n];
		vector<ll>v;
		map<ll,ll>mp;
		for(i=0;i<n;i++){
			cin>>a[i];
			ll x=a[i];
			while(x>1){
				mp[arr[x]]++;
				if(mp[arr[x]]==1) v.pb(arr[x]);
				x/=arr[x];
				
			}
		}
		for(i=0;i<(int)v.size();i++){
			//cout<<v[i]<<" "<<mp[v[i]]<<endl;
			if(mp[v[i]]%n) ans=1;
		}
		if(ans==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
	
}