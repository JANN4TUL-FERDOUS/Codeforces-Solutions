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
    ll len=t;
    while(t--){
    	ll n,i,j,k,s=0,z=1e9,z2=0;
    	ll m,l;
    	cin>>n>>m>>l;
    	ll a[l];
    	z=0;z2=l;
    	set<ll>st;
    	map<ll,ll>mp;
    	for(i=0;i<l;i++){
    		cin>>a[i];
    		if(a[i]==z2){
    			z2--;
    			while(mp[z2]){z2--;z--;}   	
    		}
    		else {
    			mp[a[i]]=1;
    			z++;
    			if(z>=(n*m-3)){s=1;}
			}
			
    	}
    	if(s==1 ) cout<<"TIDAK\n";
    	else cout<<"YA\n";
    	
    }
     return 0;
}