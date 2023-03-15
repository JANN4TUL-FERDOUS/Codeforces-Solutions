#include<bits/stdc++.h>
using namespace std;
long long unsigned a;
int main() {
	int t,l;
	cin>>t;
	while(t--){
		long long n,s,i,s1=0,s2=0;
		cin>>n>>s;
		s1=(n+1)/2;
		s1=n-s1+1;
		cout<<(s/s1)<<endl;
	}
	return 0;
}