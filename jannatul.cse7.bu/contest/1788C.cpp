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
	    if(n%2==0) cout<<"No\n";
	    else{
	    	cout<<"Yes\n";
		    int s=n,s2=0,z=0;
		    i=1;j=2*n;
		    while(s--){
		    	cout<<i<<" "<<j<<endl;
		    	i++;
		    	j-=2;
		    	if(j<n) j=2*n-1;
		    }
	    }
	}
    return 0;
}