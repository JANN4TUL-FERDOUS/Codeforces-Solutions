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
    ll n,i,j,s=0,s2=0;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
    	cin>>a[i];
    	ll z=a[i]*a[i];
    	if(z%3==0) {s++;a[i]=0;}
    	else {s2++;a[i]=1;}
    }
    if(s>s2)cout<<"2\n";
    else cout<<"0\n";
    s=0;s2=0;
    ll z=n/2;
    for(i=0;i<n;i++){
    	if(a[i]==0){
    		s++;
    		if(s>z) cout<<1;
    		else cout<<0;
    	}
    	else {
    		s2++;
    		if(s2>z) cout<<0;
    		else cout<<1;
		}
    }
    return 0;
}