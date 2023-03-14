#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int n,i,j,s=0;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(i==0) b[i]=a[i];
            else {
                if(b[i-1]-a[i]>=0 && a[i]>0) s=1;
                else b[i]=a[i]+b[i-1];
            }
        }
        if(s==1) cout<<"-1";
        else for(i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
	}
	return 0;
}