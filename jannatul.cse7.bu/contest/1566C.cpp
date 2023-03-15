#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,l;
	cin>>t;
	while(t--){
		int n,s=0,i,s1=0,s2=0,s3=0;
		string a,b;
		cin>>n>>a>>b;
		l=n;
		for(i=0;i<l;i++){
            if(a[i]=='0' && b[i]=='0') {
                s++,s2++;
                if(i<l-1 && a[i+1]=='1' && b[i+1]=='1') s++,i++;
            }
            else{
                if(a[i]=='1' && b[i]=='1') {
                    s3++;
                    if(i<l-1 && (a[i+1]=='0' && b[i+1]=='0')) s+=2,i++;
                }
                else if(a[i]!=b[i]) s+=2;
            }
		}
		if(s2==l) cout<<l<<endl;
		else if(s3==l) cout<<"0\n";
		else cout<<s<<endl;
	}
	return 0;
}