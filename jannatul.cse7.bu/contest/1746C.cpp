#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
        int n,i,j,s=0,k,s2=0,x=0,x2=0;
        cin>>n;
        map<int,int>m;
        int a[n],b[n+1]={0};
        for(i=0;i<n;i++){
            cin>>a[i];
            b[n-a[i]]=i+1;
        }

        for(i=0;i<n;i++) {
           cout<<b[i]<<" ";
        }
        cout<<endl;
 
	}
	return 0;
}