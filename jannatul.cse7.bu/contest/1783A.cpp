#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n,s=0,i,l,s2=0,s3=0,j=0;
    	cin>>n;
    	int n2=n;
    	int a[n],b[n];
    	for(i=0;i<n;i++){
    		cin>>a[i];
    	}
    	sort(a,a+n);
    	s=a[n-1];
    	b[j++]=a[n-1];
    	n--;
    	for(i=0;i<n;i++){
    		if(a[i]==s){s2=1;break;}
    		s+=a[i];    		
    		b[j++]=a[i];
    		if(i!=j )b[j++]=a[n-1];
    		n--;
		}
		if(s2==1) cout<<"NO\n";
		else {
			
			cout<<"YES\n";
			for(i=0;i<n2;i++) cout<<b[i]<<" ";
			cout<<endl;
		}
	}
	return 0;
}