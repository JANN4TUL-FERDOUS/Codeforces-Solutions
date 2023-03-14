#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j,s=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int s2=10-n;
		s2=(s2*(s2-1))/2;
		cout<<s2*6<<endl;
	}
	return 0;
}