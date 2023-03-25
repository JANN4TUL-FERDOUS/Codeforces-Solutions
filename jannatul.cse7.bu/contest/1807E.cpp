#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
ll a[N],b[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll n,i,j,k,s=0,s2=0,z=0;
  		cin>>n;
  		//ll a[n],b[n];
  		b[0]=0;
  		for(i=0;i<n;i++) {
  			cin>>a[i];
  			b[i+1]=b[i]+a[i];
  		}
  		ll l=1,r=n,mid;
  		while(l<=r){
  			mid=(l+r)/2;
  			cout<<"? "<<mid-l+1<<" ";
  			for(i=l;i<=mid;i++) cout<<i<<" ";
  			cout<<endl<<flush;
	  		ll x=0;
	  		cin>>x;
	  		if(x==b[mid]-b[l-1]){
	  			l=mid+1;
	  		}
	  		else {
	  			r=mid-1;
	  			s=mid;
  			}
  		}
  		cout<<"! "<<s<<endl<<flush;
  		
	}
	return 0;
}