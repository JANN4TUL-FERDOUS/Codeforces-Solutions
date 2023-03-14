#include <bits/stdc++.h>
using namespace std;
int x[27][100005];

int main() {
    int t;
    cin>>t;
    while(t--){
    	long long n,i,j,s=0;
    	cin>>n;
    	while(n>0){
    	  j=n%10;
    	  n/=10;
    	  s++;
    	}
    	cout<<(s-1)*9+j<<endl;
    	
	}
    return 0;
}