#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const ll N=1e6+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
    	ll i,n,m,k,j=0,s=0,x=0;
    	cin>>n>>k;
    	ll a[n];
    	s=1;
    	ll ten=20,fiv=20,ev=0,thr=0,need=2,fr=20;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		if(a[i]%2==0) ev++;
    		if(a[i]%3==0) need=0;
    		else need=min(need,3ll-a[i]%3);
    		if(a[i]%5==0) fiv=0;
    		else fiv=min(fiv,5-a[i]%5);  
    		if(a[i]%4==0) fr=0;
    		else fr=min(fr,4-a[i]%4);  		
    	}
    	if(k==2){
    		if(ev) cout<<"0\n";
    		else cout<<"1\n";
    	}
    	else if(k==3) cout<<need<<"\n";
    	else if(k==4){
    		if(ev>=2) {cout<<"0\n";continue;}
    		ll r=10;
    		if(ev==1) r=1;
    		else  r=2;
    		cout<<min(fr,r)<<"\n";
    	}
    	else if(k==5) cout<<fiv<<"\n";
	}
	return 0;
}