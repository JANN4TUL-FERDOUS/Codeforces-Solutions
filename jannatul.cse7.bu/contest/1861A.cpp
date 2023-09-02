#include <bits/stdc++.h>
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
bitset<N>bt;
ll num=1e17;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,k,s=0,z=0,z2=0,ans=-1;
    	string a;
    	cin>>a;
    	for(i=1;i<9;i++){
    		if(s==1) break;
    		for(j=0;j<i;j++){
    			ll x=a[i]-'0',x2=a[j]-'0';
    			z=x+x2*10;
    			z2=0;
    			for(ll k=2;k*k<=z;k++){
    				if(z%k==0) {z2=1;break;}
    			}
    			if(z2==0) {ans=z;s=1;break;}
    		}
    	}
    	cout<<ans<<"\n";
    	
    }
     return 0;
}