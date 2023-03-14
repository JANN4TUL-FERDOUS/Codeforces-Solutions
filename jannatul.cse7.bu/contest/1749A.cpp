#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,m,s=0,s2=0;
		cin>>n>>m;

		int a[n]={0},b[n]={0},x,y;
		for(i=0;i<m;i++) {
			cin>>x>>y;
			a[x-1]=1;b[y-1]=1;
		}
		for(i=0;i<n;i++){
			if(a[i]==0 && b[i]==0) {
				s=1;
			}
			
		}
		if(s==1 || m<n) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}