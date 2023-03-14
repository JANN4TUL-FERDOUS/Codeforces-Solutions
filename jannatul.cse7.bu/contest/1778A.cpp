#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s=0,s2=0,j,z=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) {
        	cin>>a[i];
        	s+=a[i];
        	if(a[i]<0) s2++;
    	}
    	for(i=1;i<n;i++){
    		if(a[i]==-1 && a[i-1]==-1) {z=1;break;}
    	}
    	if(z==1) s+=4;
    	else if(s2==0) s-=4;
    	cout<<s<<endl;
  }	  
    return 0;
}