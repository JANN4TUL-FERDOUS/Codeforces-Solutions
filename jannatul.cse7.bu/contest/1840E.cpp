#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=2e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
vector<ll>v[N];
string a[3];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    ll l=t;
    while(t--){
    	//cout<<"Case "<<l-t<<": ";
    	ll n,i,j,k,s=0,dif=0;
    	cin>>a[1]>>a[2];
    	n=a[1].length();
    	for(i=0;i<n;i++){
    		if(a[1][i]!=a[2][i]) dif++;
    	}
    	ll tim,q;
    	cin>>tim>>q;
    	for(i=0;i<=max(n,q);i++) v[i].clear();
    	//cout<<dif<<" "<<n<<" "<<tim<<" "<<q<<" "<<v[1].size()<<endl;
    	for(k=0;k<q;k++){
    		for(ll i:v[k]){
    			if(a[1][i]!=a[2][i]) dif++;
    		}
    		ll x;
    		cin>>x;
    		if(x==3){
    			if(dif==0) cout<<"YES\n";
    			else cout<<"NO\n";
    		}
    		else if(x==1){
    			ll pos;
    			cin>>pos;pos--;
    			if(a[1][pos]!=a[2][pos]) dif--;
    			if(tim+k<=q)v[tim+k].pb(pos);
    		}
    		else if(x==2){
    			ll u,v,pos,pos2;
    			cin>>u>>pos>>v>>pos2;
    			pos--;pos2--;
    			//cout<<u<<" "<<v<<" "<<a[u][pos]<<" "<<a[v][pos2]<<endl;
    			if(a[u][pos]==a[v][pos2] || pos==pos2) {
    				swap(a[u][pos],a[v][pos2]);
    				continue;
    			}
    			if(a[1][pos]!=a[2][pos]) dif--;
    			if(a[1][pos2]!=a[2][pos2]) dif--;
    			swap(a[u][pos],a[v][pos2]);
    			if(a[1][pos]!=a[2][pos]) dif++;
    			if(a[1][pos2]!=a[2][pos2]) dif++;  
    		}
    	}
	}
	return 0;
}