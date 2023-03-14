#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i,j;
        cin>>n;
        long long a[n],s=0,s2=0;
        for(i=0;i<n;i++){
        	cin>>a[i];
        	s+=a[i];
        }
        sort(a,a+n);
        
        cout<<abs(s)<<endl;
    }
    
	return 0;
}