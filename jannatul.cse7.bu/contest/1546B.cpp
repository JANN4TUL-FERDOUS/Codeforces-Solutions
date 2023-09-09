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
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(tt--){
		ll n,m,k,i,j=-1,s=0,s2=0,z=0;
		cin>>n>>m;
		char a[m];
		string b;
		for(i=0;i<m;i++) a[i]=0;
		for(i=0;i<2*n-1;i++){
			cin>>b;	
			for(j=0;j<m;j++){
				//cout<<i<<" "<<j<<" "<<a[j]<<" "<<b[j]<<endl;
				a[j]^=b[j];
			}
		}
		for(i=0;i<m;i++) cout<<a[i];
		cout<<"\n";		
   }
   return 0;
}