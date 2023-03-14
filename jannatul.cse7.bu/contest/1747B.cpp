#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i,j,s=0;
        cin>>n;
        //cout<<max(1,n-1)<<endl;
    	n*=3;
    	int n2=n;
    	
        i=2;
        while(n>i){
        	n-=3;
        	i+=3;
        	if(i%3==0) i++;
        	s++;
        	
        }
        cout<<s<<endl;
        i=2;
        n=n2;
        while(n>i){
        	cout<<i<<" "<<n<<endl;
        	n-=3;
        	i+=3;
        	if(i%3==0) i++;
        	
        }
        
    }
	return 0;
}