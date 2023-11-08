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

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	int l=t;
  	while(t--){
  		ll n,i,j,k=0,len;
  		cin>>n;
  		ll a[n];
  		for(i=0;i<n;i++){
  			cin>>a[i];
  			if(a[i]%5==0) {a[i]+=a[i]%10;k=1;}
  		}
  		sort(a,a+n);
  		if(k){
  			if(a[0]==a[n-1]) cout<<"YES\n";
  			else cout<<"NO\n";
  			continue;
  		}
  		ll f2=0,f12=0;
  		for(i=0;i<n;i++){
  			while((a[i]%10)!=2){a[i]+=a[i]%10;}
  			if(a[i]%20==2) f2=1;
  			if(a[i]%20==12) f12=1;
  		}
  		if(f2==1 && f12==1) cout<<"NO\n";
  		else cout<<"YES\n";
	}
	return 0;
}