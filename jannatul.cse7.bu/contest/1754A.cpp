#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j,k;
		int s=0,s2=0;
		cin>>n;
		string a;
		cin>>a;
		for(i=0;i<n;i++){
			if(a[i]=='Q') {
				s2=1;
				s++;
			}
			else {
				if(s2==1)s--;
				if(s==0) s2=0;
				
			}
			
		}
		if(s>0) cout<<"No\n";
		else cout<<"Yes\n";
	}
	return 0;
}