#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ff first
#define ss second
#define pb push_back
 
const int N=1e6+7;
ll mod=998244353;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
ll sv[N],ttl[N];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
	cin>>t;    
    ll tt=t;
    vector<ll>v;
    for(ll i=1;i<N;i++) sv[i]=i;
    for(ll i=2;i<N;i++){
    	if(sv[i]!=i) continue;
    	v.pb(i);
    	for(ll j=i*i;j<N;j+=i) sv[j]=min(sv[j],i);
    }
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,j=0,k,s=0;
		ll d;
		cin>>d;
		ll x=lower_bound(v.begin(),v.end(),d+1)-v.begin();
		ll y=lower_bound(v.begin(),v.end(),v[x]+d)-v.begin();
		cout<<v[x]*v[y]<<"\n";
	}
	return 0;
}