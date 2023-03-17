#include <bits/stdc++.h>
using namespace std; 
#define ll long long
const int nn=2e5+7;
long long a[nn],b[nn],c[nn][2];
int main () {
	ios_base::sync_with_stdio(0); 
  	cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll i,n,j,s=0,s2=0,x;
  		cin>>n>>s;
  		for(i=0;i<n;i++){
  			cin>>x;
  			if(i==0 || i==n-1) {a[i]=x;b[i]=x;}
  			else if(x>s) {a[i]=s;b[i]=x-s;}
  			else {a[i]=0;b[i]=x;}
  			//cout<<x<<" "<<a[i]<<" "<<b[i]<<endl;
  		}
  		c[0][0]=0;c[0][1]=0;
  		for(i=1;i<n;i++){
  			c[i][0]=min(c[i-1][0]+b[i-1]*a[i],c[i-1][1]+a[i]*a[i-1]);
  			c[i][1]=min(c[i-1][0]+b[i]*b[i-1],c[i-1][1]+a[i-1]*b[i]);
  		}
  		cout<<c[n-1][0]<<"\n";			
  	}
  	return 0;
}