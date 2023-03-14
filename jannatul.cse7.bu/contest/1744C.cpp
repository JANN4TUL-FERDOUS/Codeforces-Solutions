#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int l=t;
	while(t--){
        long long n,i,j,s=0,s1=0,k,s2=0,x=0,x2=0;
        char c;
        cin>>n>>c;
        vector<int>v;
        string a;
        cin>>a;
        int l=a.length();
        for(i=0;i<l;i++){
            if(a[i]==c) {s++;if(s==1)j=i;}
            if(s1==0 && a[i]=='g') s1=i+1;
            if(s>=1 && a[i]=='g'){
          
                s2=i-j;
                s=0;
                x=max(x,s2);
            }
        }
        if(s>=1) x=max(x,s1+n-j-1);
        cout<<x<<endl;
	}
	return 0;
}