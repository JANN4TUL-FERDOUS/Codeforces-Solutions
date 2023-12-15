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
string a[1000];
ll ans=0,n,m;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
   	ll t=1;
   	//cin>>t;
   	while(t--){
   		ll i,j,k,s=0;
   		cin>>n>>k;
   		ll pos;
   		cin>>pos;
   		ll l=1,r=n;
   		while(l<r){
   			ll mid=(l+r)/2;
   			cout<<"? "<<l<<" "<<mid<<endl;
   			ll x;
   			cin>>x;
   			//cout<<x<<" "<<mid-l+1-x<<" "<<pos<<endl;
   			if(mid-l+1-x>=pos) r=mid;
   			else {pos-=mid-l+1-x;l=mid+1;}
   			if(pos==0) break;
   			//cout<<l<<" "<<r<<" "<<mid<<" "<<pos<<endl;
   		}	
   		cout<<"! "<<l<<"\n";	
	}
	return 0;
}