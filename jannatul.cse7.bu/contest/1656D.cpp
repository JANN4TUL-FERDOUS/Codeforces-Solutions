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
		ll cnt=0,z=0;
		s=n;
		while(s%2==0){s/=2;cnt++;div*=2;}
		if(s==1) {cout<<"-1\n";continue;}
		if(2*div<s) cout<<2*div<<"\n";
		else cout<<s<<"\n";
	}
	return 0;
}