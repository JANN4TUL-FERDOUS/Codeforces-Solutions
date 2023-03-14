#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int n,i,j,s=0,k,s2=0,x=0,x2=0;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) {
                s++;
                if(s==1) j=i;
           }
            if(s>=1 && a[i]==0) s2++;
        }
        if(s2>0){
            for(i=j;i<n;i++){
                if(x+x2==s2) break;
                if(a[i]==1) x++;
                else x2++;
            }
        }
        cout<<min(s2,x)<<endl;
	}
	return 0;
}