#include <bits/stdc++.h>
using namespace std;
int x[27][100005];

int main() {
    int t;
    cin>>t;
    while(t--){
    	int n,i,j;
    	cin>>n;
    	long long a[n],s=0,s2=0,s3=0,s4=0;
    	map<long long,int>m;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    	}
    	s2=a[0];s3=a[0];
    	sort(a,a+n);
    	if(s2==a[n-1]) cout<<s2<<endl;
    	else{
    		s4=(s2+a[n-1]+1)/2;
    		for(i=0;i<n;i++){
	    		if(a[i]>s2) {
	    			s3+=(a[i]+s2+1)/2;
	    			s3-=s2;
	    			s2=s3;
	    		}
	    	}
	    	
    		cout<<max(s3,s4)<<endl;
		}
	}
    return 0;
}