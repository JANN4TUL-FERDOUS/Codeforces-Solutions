#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=2e6+7;
ll mod=998244353;
int ax[8]={0,0,-1,+1,-1,-1,1,1};
int ay[8]={-1,1,0,0,-1,1,-1,1};
int kx[8]={2,2,-2,-2,1,1,-1,-1};
int ky[8]={1,-1,1,-1,2,-2,2,-2};
//const ll len=180;
 
 
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    int tt=t;
    while(t--){
		ll n,i,j,sum=0,p,z,m,k;
		cin>>n;
		if(n<7 || (n%3==0 && n<10)) cout<<"NO\n";
		else{
			cout<<"YES\n";
			if(n%3==0) cout<<"1 4 "<<n-5<<"\n";
			else cout<<"1 2 "<<n-3<<"\n";
		}
	}
	return 0;
}