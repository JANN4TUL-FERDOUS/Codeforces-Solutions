#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j,k;
		int s=0,s2=0;
		cin>>n;
		int l=n/2;
		if(n%2) cout<<n<<" ";
		for(i=1;i<=l;i++){
			cout<<l+i<<" "<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}