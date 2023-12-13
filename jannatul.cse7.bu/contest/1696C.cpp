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
ll par[N];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
   	ll t=1;
   	cin>>t;
   	while(t--){
   		ll n,i,j,k,s=0,m;
   		cin>>n>>m;
   		ll a[n];
   		vector<pair<ll,ll>>v,v2;
   		ll c[n];
   		for(i=0;i<n;i++){
   			cin>>a[i];
   			ll cnt=1;
   			while(a[i]%m==0){
   				cnt*=m;
   				a[i]/=m;
   			}
   			c[i]=cnt;
		}
		for(i=0;i<n;i++){
			if(i==0 || a[i]!=a[i-1]) v.pb({a[i],c[i]});
			else v.back().ss+=c[i];
		}
		cin>>k;
   		ll b[k],d[k];
		for(i=0;i<k;i++){
   			cin>>b[i];
   			ll cnt=1;
   			while(b[i]%m==0 ){
   				cnt*=m;
   				b[i]/=m;
   			}
   			d[i]=cnt;
		}
		for(i=0;i<k;i++){
			if(i==0 || b[i]!=b[i-1]) v2.pb({b[i],d[i]});
			else v2.back().ss+=d[i];
		}
		//cout<<v.size()<<" "<<v2.size()<<endl;
		if(v.size()!=v2.size()) cout<<"NO\n";
   		else{
   			ll z=0;
   			for(i=0;i<v.size();i++){
   				//cout<<i<<" "<<v[i].ff<<" "<<v[i].ss<<" "<<v2[i].ff<<" "<<v2[i].ss<<endl;
   				if(v[i]!=v2[i]){z=1;break;}
   			}
   			if(z==1) cout<<"NO\n";
   			else cout<<"YES\n";
   		}
	}
	return 0;
}