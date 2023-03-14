#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		long long s2=0;
		int a[n],b[n];
		string s;
		cin>>s;
		for(i=0;i<n;i++) {
			cin>>a[i];
		}
		int j=-1;
		for(i=0;i<n;i++){
			if(s[i]=='0') j=i;
			else {
				if(a[i]<a[j] && j>=0){swap(s[i],s[j]);j=i;}
			}
		}
		for(i=0;i<n;i++){
			if(s[i]=='1') s2+=a[i];
		}
		cout<<s2<<endl;
	}
	return 0;
}