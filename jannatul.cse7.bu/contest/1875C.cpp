#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=3e5+7;
ll mod=998244353;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
const ll len=180;
ll a[N];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k,i,j=0,s=0,s2=0,z=0,z2=0,x=-1,y=0;
		cin>>n>>m;
		n%=m;
		s=n;
		while(s%m){
			y++;
			z+=s;
			s*=2;
			s%=m;
			if(y>33) {z=-1;break;}
		}
		cout<<z<<"\n";		
		
	}
	return 0;
}