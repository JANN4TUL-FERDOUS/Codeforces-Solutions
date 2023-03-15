#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,l;
	cin>>t;
	while(t--){
		int n,s,i,s1=0,s2=0;
		string a;
		cin>>a;
		l=a.length();
		for(i=l-1;i>=0;i--){
            if(a[i]=='1') s2++;
            else{
                if(i==l-1) s1++;
                else if(a[i+1]=='1') s1++;
            }
		}
		if(s1>1 && s2>0) cout<<"2\n";
		else if(s2==l) cout<<"0\n";
		else cout<<"1\n";
	}
	return 0;
}