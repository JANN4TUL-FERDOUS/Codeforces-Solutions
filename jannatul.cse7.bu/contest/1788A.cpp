#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	
	    int n,i,j;
	    cin>>n;
	    int a[n],k,s=0,b[n]={0};
	    for(i=0;i<n;i++){
	    	cin>>a[i];
	    	if(a[i]==2) s++;
	    	b[i]=s;
	    }
	    if(s%2) cout<<"-1\n";
	    else{
	    	s/=2;
	    	for(i=0;i<n;i++){
	    		if(b[i]==s){
	    			cout<<i+1<<endl;
	    			break;
	    		}
	    	}
	    }
	}
    return 0;
}