#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
//ll b[N],a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	int l=t;
  	while(t--){
  		//cout<<l-t<<" ";
  		ll a,b,c,i,j,s2=0,z=0,s3=1e9;
  		cin>>a>>b;
  		ll s=a+b;
  		if(a>b) swap(a,b);
  		ll a2=sqrt(a);
  		ll b2=sqrt(a+b);
  		for(i=a2;i<=b2+100;i++){
  			s=min(s,i-1+(a+i-1)/i+(b+i-1)/i);
  		}
  		cout<<s<<"\n";  		
	}
	return 0;
}