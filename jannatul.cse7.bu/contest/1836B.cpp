#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=1e5;
ll mod=1e9+7;
//ll bt[N][N];
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
string a,b,c;
ll cnt=0,str,str2,sr,sr2;
 

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll i,j,n,s=0,s2=0,z=0,mx=-1,k,g,num=0;
    	cin>>n>>k>>g;
    	s=k*g;
    	s2=n*((g-1)/2);
    	if(s2>=s) cout<<s<<"\n";
    	else{
    		if((s-s2)%g) s2-=g-(s-s2)%g;
    		cout<<s2<<"\n";
    	}
    	
	}
	return 0;
}