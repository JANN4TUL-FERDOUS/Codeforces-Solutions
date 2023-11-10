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

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t=1;
  	//cin>>t;
  	int l=t;
  	while(t--){
  		ll n,i,j,k=0,len,s=0,m;
  		ll u,v;
  		cin>>u>>v;
  		if(u>v) cout<<"-1\n";
  		else if(u==v){
  			if(u==0) cout<<"0\n";
  			else cout<<"1\n"<<u<<endl;
  		}
  		else{
  			ll dif=v-u;
  			if(dif%2) cout<<"-1\n";
  			else{
  				dif/=2;
  				//cout<<u<<" "<<dif<<" "<<((u+dif)^dif)<<endl;
  				if(((u+dif)^dif)==u) cout<<"2\n"<<u+dif<<" "<<dif<<"\n";
  				else cout<<"3\n"<<u<<" "<<dif<<" "<<dif<<"\n";
  			}
  		}
	}
	return 0;
}