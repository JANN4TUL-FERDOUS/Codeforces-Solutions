#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i,j,s=0,s2=0,z=0,n;
		cin>>n;
		int a[n];
		
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==1) s2++;
		}
		s=(s2+1)/2;
		cout<<s+(n-s2)<<endl;
	}
	return 0;
}