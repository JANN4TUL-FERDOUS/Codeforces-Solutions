#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=1e7+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
ll a[N];
void seive(){
	ll i,j;
	for(i=1;i<N;i++) a[i]=i;
	for(i=2;i*i<N;i++){
		if(a[i]!=i) continue;
		for(j=i*i;j<N;j+=i) a[j]=min(a[j],i);
	}
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll len=t;
    seive();
    while(t--){
    	ll n,m,i,j,k,s=1e16,s2=1e17;
    	ll l,r;
    	cin>>l>>r;
    	if(r<4) cout<<"-1\n";
    	else{
    		if(l==r){
    			//cout<<a[l]<<" ";
    			if(a[l]==l) cout<<"-1\n";
    			else if(a[l]+a[l]>r) cout<<"-1\n";
    			else cout<<a[l]<<" "<<l-a[l]<<"\n";
    		}
    		else{
    			s=r-(r%2);
    			cout<<"2 "<<s-2<<"\n";
    			
    		}
    	}   	
    	
    }
     return 0;
}