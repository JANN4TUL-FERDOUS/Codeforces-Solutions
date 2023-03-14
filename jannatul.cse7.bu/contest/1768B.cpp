#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n,k,s=1,z=0,s2=0;
    	cin>>n>>k;
    	int i,a[n]; 
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		if(a[i]==s){
    			s++;
    		}
    		else s2++;
    		
		}		
    	cout<<(s2+k-1)/k<<endl;
    	
    	
	}
    return 0;
}