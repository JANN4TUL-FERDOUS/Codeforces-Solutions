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

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll len=t;
    while(t--){
    	ll n,m,i,j,k,s=1e16,s2=1e17;
    	cin>>n;
    	ll d,x;
    	ll v[205];
    	for(i=0;i<205;i++) v[i]=1e15;
    	for(i=0;i<n;i++){
    		cin>>d>>x;
    		v[d]=min(v[d],x);
    		
    	}
    	for(i=1;i<205;i++){
    		s=min(s-1,v[i]);
    		s2=min(s2,i+(s-1)/2);
    		
    		if(s==0) break;
    	}
    	//cout<<s<<" "<<s2<<endl;
    	cout<<s2<<"\n";
    	
    	
    }
     return 0;
}