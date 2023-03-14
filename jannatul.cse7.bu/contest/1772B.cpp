#include <bits/stdc++.h>
using namespace std;
int x[27][100005];

int main() {
    int t;
    cin>>t;
    while(t--){
    	int a[4],b[4],i,s=0,x,y;
    	for(i=0;i<4;i++){
    		cin>>a[i];
    		b[i]=a[i];
    	}
    	sort(a,a+4);
    	for(i=0;i<4;i++){
    		if(b[i]==a[0]) x=i;
    		if(b[i]==a[3]) y=i;
    	}
    	if((x==0 && y==3 ) || (x==1 && y==2) || (x==2 && y==1) || (x==3 && y==0)) cout<<"YES\n";
    	
    	//if((abs(x-y)==3 && (x==0|| x==3)) || (abs(x-y)==1 &&(x==2 || x==1))) cout<<"YES\n";
    	else cout<<"NO\n";
    	
	}
    return 0;
}