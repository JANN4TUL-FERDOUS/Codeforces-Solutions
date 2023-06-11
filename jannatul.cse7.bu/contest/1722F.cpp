#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=100;
ll mod=1e9+7;
ll bt[N][N];
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
char a[N][N];
ll n,m,x=0,cnt;
set<ll>st,st2;
void dfs(ll i,ll j){
	bt[i][j]=1;
	st.insert(i);
	st2.insert(j);
	cnt++;
	for(ll k=0;k<8;k++){
		ll x=i+ax[k],y=ay[k]+j;
		if(x>=0 && x<n && y>=0 && y<m && bt[x][y]==0 && a[x][y]=='*'){
			dfs(x,y);
			if(cnt>3) {x=1;return;}
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	x=0;cnt=0;
    	ll i,j,s2=0,z=0;
    	cin>>n>>m;
    	for(i=0;i<n;i++){
    		for(j=0;j<m;j++) cin>>a[i][j];
    	}
    	for(i=0;i<n;i++){
    		if(x==1) break;
    		for(j=0;j<m;j++){
    			if(a[i][j]=='*' && bt[i][j]==0){
    				cnt=0;
    				dfs(i,j);
    				//cout<<i<<" "<<j<<" "<<cnt<<" "<<st.size()<<" "<<st2.size()<<endl;
    				if(cnt!=3 || st.size()!=2 || st2.size()!=2)x=1;
    				st.clear();
    				st2.clear();
    				if(x==1) break;
    			}
    		}
    	}
    	for(i=0;i<n;i++){
    		for(j=0;j<m;j++) bt[i][j]=0;
    	}
    	if(x==0) cout<<"YES\n";
    	else cout<<"NO\n";
    	
    }
	return 0;
}