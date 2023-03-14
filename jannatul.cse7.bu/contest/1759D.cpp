#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	long long n,m,s2=0,s5=0,s=1,z=0;
    	cin>>n>>m;
    	z=n;
    	while(n%10==0) n/=10;
    	while(n%2==0 && s*5<=m){s*=5;n/=2;}
    	while(n%5==0 && s*2<=m){s*=2;n/=5;}
    	while(s*10<=m) s*=10;
    	if(s==1) cout<<z*m<<endl;
    	else{
    		long long x=m/s;
    		 cout<<s*x*z<<endl;
		}
	}
    return 0;
}