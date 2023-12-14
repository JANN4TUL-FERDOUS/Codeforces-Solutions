#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ff first
#define ss second
#define pb push_back
const int N=3e5+7;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
   	ll t=1;
   	cin>>t;
   	while(t--){
   		ll n,i,j,k,s=0,m;
   		cin>>n;
   		//cout<<n<<" ";
   		ll l=1,r=n;
   		while(l<r){
   			ll mid=(l+r)/2;
   			cout<<"? "<<l<<" "<<mid<<endl;
   			ll cnt=0;
   			j=0;
   			for(i=l;i<=mid;i++){
   				ll x;
   				cin>>x;
   				if(x>=l && x<=mid) cnt++;
   			}
   			if(cnt%2) r=mid;
   			else l=mid+1;
   		}
   		cout<<"! "<<l<<endl;
	}
	return 0;
}