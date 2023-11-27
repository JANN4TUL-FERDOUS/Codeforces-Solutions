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
		ll  n,m,i,j,k,s=0;
		ll a,b,c;
		cin>>a>>b>>c;
		ll m1=min(b,c),m2=min(a,c),m3=min(b,a);
		ll aa=a+m1;
		if(a+m1>=0 && abs(b-c)%2==0 ) cout<<"1 ";
		else cout<<"0 ";
		if(b+m2>=0 && abs(a-c)%2==0) cout<<"1 ";
		else cout<<"0 ";
		if(c+m3>=0 && abs(a-b)%2==0) cout<<"1\n";
		else cout<<"0\n";
	}
	return 0;
}