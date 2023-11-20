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
    ll t=1;
   // cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k=0,i,j=1,s=0,s2=0;
		cin>>n;
		string str="codeforces";
		ll a[10];
		for(i=0;i<10;i++) a[i]=1;
		k=1;
		ll z=10;
		for(i=0; ;i=(i+1)%10){
			if(k>=n) break;
			k/=a[i];
			a[i]++;
			k*=a[i];
		}
		for(i=0;i<10;i++){
			for(j=0;j<a[i];j++) cout<<str[i];
		}
	}
	return 0;
}