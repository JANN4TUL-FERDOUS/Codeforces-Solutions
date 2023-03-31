#include <bits/stdc++.h>
using namespace std;
string a,b;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int i,j,s=0,s2=0,z=0,l,r,n,ans=-1,res=0;
	    cin>>l>>r;
	    for(i=l;i<=r;i++){
	    	z=i;
	    	s=10;
	    	s2=-1;
	    	while(z>0){
	    		int zz=z%10;
	    		s=min(s,zz);
	    		s2=max(s2,zz);
	    		z/=10;
	    	}
	    	if(abs(s-s2)>ans){ans=abs(s-s2);res=i;}
	    	if(ans==9) break;
	    }
	    cout<<res<<endl;
	}
	return 0;
}