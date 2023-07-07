#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=4e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
ll arr[N];
vector<ll>g[N];
ll ans=0,res,len[N],parent[N],wet[N];

ll find(ll v){
	if(v==parent[v]) return v;
	return parent[v]=find(parent[v]);
}
void Union(ll a,ll b){
	a=find(a);
	b=find(b);
	if(a!=b){
		if(wet[a]<wet[b]){
			swap(a,b);
		}
		parent[b]=a;
		//cout<<a<<" "<<b<<"  "<<len[a]<<" "<<len[b]<<endl;
		len[a]+=len[b];
		wet[a]+=wet[b];
		//cout<<len[a]<<" "<<len[b]<<endl;
	}
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,m,i,k;
    	cin>>n>>m;
    	ll ans=0;
    	for(i=1;i<=n;i++){
    		len[i+n]=1;len[i]=0;
    		parent[i]=i; parent[i+n]=i+n;   	
    		wet[i]=1;wet[i+n]=1;	
    	}
    	for(i=0;i<m;i++){
    		ll u,v;
    		string str;
    		cin>>u>>v>>str;
    		if(str[0]=='c'){
    			Union(u,v);
    			Union(n+u,n+v);
    		}
    		else{
    			Union(u,n+v);
    			Union(n+u,v);
    		}
    	}
    	ll z=0;
    	for(i=1;i<=n;i++){
    		//cout<<i<<" "<<parent[i]<<" "<<len[i]<<" "<<len[i+n]<<" "<<parent[i]<<endl;
    		if(parent[i]==parent[i+n]){z=1;break;}
    		if(parent[i]==i){
    			ans+=max(len[find(i)],len[find(i+n)]);
    		}
    	}
    	//cout<<ans<<" ";
    	if(z==1) ans=-1;
    	cout<<ans<<"\n";
	}
	return 0;
}