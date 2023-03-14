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
	    int a[12],b[12],s=0;
	    i=0;
	    while(n>0){
	    	int x=n%10;
	    	if(x%2==0){
	    		a[i]=x/2;
	    		b[i]=x/2;
	    	}
	    	else{
	    		if(s%2==0){
	    			a[i]=x/2+1;
	    			b[i]=x/2;
	    		}
	    		else{
	    			b[i]=x/2+1;
	    			a[i]=x/2;
	    		}
	    		s++;
	    	}
	    	n/=10;
	    	i++;
	    }
	    //cout<<s<<" "<<i<<" "<<endl;
	    i--;
	    s=0;
	    int s2=i;
	    for(;i>=0;i--){
	    	if(a[i]==0 && (i==0 ||s==1)) cout<<a[i];
	    	else if(a[i]>0) {s=1;cout<<a[i];}
	    }
	    s=0;
	    cout<<" ";
	    for(i=s2;i>=0;i--){
	    	if(b[i]==0 && (s==1 || i==0)) cout<<b[i];
	    	else if(b[i]>0) {s=1;cout<<b[i];}
	    }
	    cout<<endl;	
	}
    return 0;
}