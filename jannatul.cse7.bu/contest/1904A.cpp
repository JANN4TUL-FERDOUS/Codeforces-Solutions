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
   	ll t;
   	cin>>t;
   	while(t--){
   		ll n,i,j,k,s=0;
   		ll a,b,x,y,x2,y2;
   		cin>>a>>b>>x>>y>>x2>>y2;
   		map<pair<ll,ll>,ll>mp,mp2;
   		set<pair<ll,ll>>st;
   		for(i=0;i<8;i++){
			ll m=kx[i],n=ky[i];
			if(abs(kx[i])%2==0){
				m/=2;
				m*=a;
				n*=b;
			}
			else{
				n/=2;
				n*=a;
				m*=b;
			}
			//cout<<i<<" "<<j<<" "<<kx[i]<<" "<<ky[j]<<endl;
			
			mp[{x+m,y+n}]++;
			mp2[{x2+m,y2+n}]++;
			if(mp[{x+m,y+n}]==1) st.insert({x+m,y+n});
			//cout<<i<<" "<<kx[i]<<" "<<ky[i]<<endl;
			//cout<<m<<" "<<n<<" "<<x+m<<" "<<y+n<<" "<<x2+m<<" "<<y2+n<<endl;
   		}
   		for(auto i:st){
   			if(mp2[i]) s++;
   		}
   		cout<<s<<endl;
   	}
	return 0;
}