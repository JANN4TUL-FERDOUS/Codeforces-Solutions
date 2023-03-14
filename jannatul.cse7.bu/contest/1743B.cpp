#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j=1,s=0;
		cin>>n;
		int a[n];s=n;
		for(i=0;i<n;i++){
			if(i%2)a[i]=s--;
			else a[i]=j++; 
		}
		for(i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}