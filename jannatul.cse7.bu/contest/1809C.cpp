#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		int n,i,j,k,s=0,s2=0,z=0;
  		cin>>n>>k;
  		int a[n];
  		for(i=0;i<n;i++) a[i]=-32;
  		for(i=0;i<n;i++){
  			if(k>=n-i){
  				k-=n-i;
  				a[i]=1;
  			}
  			else  a[i]=-1;
  			
  		}
  		for(i=n-1;i>=0;i--){
  			if(a[i]==-1){
  				if(z==0) a[i]=-1;
  				else {z=0;a[i]=-(n-i)*2;}
  			}
  			else{
  				if(z==1) a[i]=1;
  				else a[i]=(n-i)*2;
  				z=1;
  			}
  		}
  		for(i=0;i<n;i++) cout<<a[i]<<" ";
  		cout<<endl;
	}
	return 0;
}