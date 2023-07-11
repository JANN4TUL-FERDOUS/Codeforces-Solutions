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
bitset<N>bt;
ll arr[N],sum,n,res[N];
pair<ll,ll>g[N];
 
void fn(ll i){
	//cout<<i<<" "<<g[i].ff<<" "<<g[i].ss<<endl;
	if(i==n){
		cout<<sum<<"\n";
		return;
	}
	sum++;
	fn(g[i].ss);
	cout<<g[i].ff<<" ";
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll i,j,ans=0;
    cin>>n;
    ll a[n+1],b[n+1],det[n+1];
     set<ll>st;
    for(i=1;i<=n;i++) {
    	cin>>a[i];
    	a[i]=i-a[i];
    	st.insert(i);
    	arr[i]=-1;
	}
	arr[0]=-1;arr[n]=0;
	st.insert(0);
    for(j=1;j<=n;j++){ cin>>b[j];b[j]+=j;}
    b[0]=0;
    queue<ll>q;
    q.push(n);
    while(!q.empty()){
    	ll x=q.front();
    	q.pop();
    	while(1){
    		auto z=st.lower_bound(a[x]);
    		ll pos=*z;
    		if(z==st.end() || pos>x) break;
    		if(arr[b[pos]]==-1){
    			q.push(b[pos]);
    			g[b[pos]]={pos,x};
    			arr[b[pos]]=x;
    		}
    		st.erase(z);    		
    	}    	
    }
    if(arr[0]==-1) cout<<"-1\n";
    else{
    	fn(0);
    }
    return 0;
}