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
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,k,s=0,div=1;
		cin>>n;
		ll a,b;
		cin>>a>>b;
		if(a==1){
			if((n-1)%b==0) cout<<"Yes\n";
			else cout<<"No\n";
		}
		else {
			ll z=0;
			s=1;
			while(s<=n){
				if((n-s)%b==0){z=1;break;}
				s*=a;
			}
			if(z==1) cout<<"Yes\n";
			else cout<<"No\n";
		}
		
	}
	return 0;
}