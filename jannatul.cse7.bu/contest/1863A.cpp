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
    	ll n,i,j,k,s=0,z=0,z2=0;
    	ll a,q;
    	cin>>n>>a>>q;
    	string str;
    	cin>>str;
    	for(i=0;i<q;i++){
    		if(str[i]=='+') z++;
    		else z2++;
    		s=max(s,z-z2);
    	}
    	if(a+z<n) cout<<"NO\n";
    	else if(a+s>=n) cout<<"YES\n";
    	else cout<<"MAYBE\n";
    }
     return 0;
}