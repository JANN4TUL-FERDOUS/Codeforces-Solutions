#include <bits/stdc++.h>
using namespace std;
const int nn=1e5+2;
string a;
int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n,k,i,s2=0,z=0,s=0;
	    cin>>n>>k;
	    cin>>a;
	    map<char,int>m;
	    for(i=0;i<n;i++) m[a[i]]++;
	    for(i=0;i<26;i++){
	    	char c='a',d='A';
	    	c+=i;d+=i;
	    	s+=min(m[c],m[d]);
	    	if(k>0){
	    		if(m[c]>m[d]){
		    		m[c]-=m[d];
		    		if(m[c]/2>k) {s+=k;k=0;}
		    		else {s+=m[c]/2;k-=m[c]/2;} 
		    	}
		    	else{
		    		m[d]-=m[c];
		    		if(m[d]/2>k){s+=k;k=0;}
		    		else{s+=m[d]/2;k-=m[d]/2;}
		    	}
	    	}
	    	
	    }
	    cout<<s<<endl;
    }
	return 0;
}