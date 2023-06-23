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
vector<ll>g[N];
 
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,i,j,s=0,s2=0;
    cin>>n;
    ll deg[n],sum[n];
    queue<ll>q;
    vector<pair<ll,ll>>v;
    for(i=0;i<n;i++){
    	cin>>deg[i]>>sum[i];
    	if(deg[i]==1){
    		q.push(i);
    	}
    }
    //cout<<q.size()<<endl;
    while(!q.empty()){
    	ll top=q.front();
    	q.pop();
    	//cout<<top<<" "<<q.size()<<" "<<deg[top]<<" "<<sum[top]<<endl;
    	if(deg[top]==0) continue;
    	v.pb({top,sum[top]});
    	deg[sum[top]]--;
    	if(deg[sum[top]]==1) q.push(sum[top]);
    	sum[sum[top]]^=top;
    }
    cout<<v.size()<<"\n";
    for(i=0;i<(int)v.size();i++){
    	cout<<v[i].ff<<" "<<v[i].ss<<endl;
    }
	return 0;
}