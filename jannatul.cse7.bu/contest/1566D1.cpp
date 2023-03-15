#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,l;
	cin>>t;
	while(t--){
		int n,m,s=0,i,s1=0,s2=0,s3=0,j,x;
		cin>>n>>m;
		long long a[n*m+1];
		for(i=0;i<n*m;i++){
            cin>>a[i];
            for(int j=0;j<i;j++){
                if(a[j]<a[i]) s++;
            }
		}
		cout<<s<<endl;
	}
	return 0;
}