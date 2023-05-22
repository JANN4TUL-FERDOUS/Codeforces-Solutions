#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define  pb push_back
const int N=2e5+7;
bitset<N>bt;
vector<ll>g[N];
ll res=0,add;
void dfs(ll i){
	bt[i]=1;
	//cout<<i<<" "<<g[i].size()<<endl;
	if(g[i].size()==1) res++;
	for(auto j:g[i]){
		if(bt[j]==0) dfs(j);
	}
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,k,i,j,s=0,s2=0,z=0,s3=0;
		cin>>n;
		ll a[n];
		vector<ll>v;
		map<ll,ll>mp,mp2;
		for(i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
			bt[i+1]=0;	
			if(g[a[i]].size()==0 || mp2[a[i]]!=i+1) {
				//cout<<i+1<<" "<<a[i]<<endl;
				g[a[i]].pb(i+1);
				mp2[a[i]]=i+1;
			}
			if(g[i+1].size()==0 || mp2[i+1]!=a[i]){
				//cout<<i+1<<" "<<a[i]<<endl;
				g[i+1].pb(a[i]);
				mp2[i+1]=a[i];
			}	
		}
		ll ans=0,zz=0;
		res=0;add=0;
		for(i=1;i<=n;i++){
			if(bt[i]==0){
				//cout<<i<<" "<<ans<<" "<<res<<" "<<add<<endl;
				ans++;
				zz=res;
				dfs(i);
				add++;
				if(res==zz) s2++;
				else s3++;
				if(res>0 && ans-1>s2) {add--;res--;}
			}
		}
		if(s3) s2++;
		cout<<s2<<" "<<ans<<"\n";
		//cout<<endl;	
		for(i=1;i<=n;i++) g[i].clear();	
		
	}
	return 0;
}