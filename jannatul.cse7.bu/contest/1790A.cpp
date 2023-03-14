#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a[]={3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,2,7,9,5,0,2,8,8,4,1,9,7,1};
	while(t--){
		string c;
		cin>>c;
		int b,i,s=0;
		for(i=0;i<c.length();i++){
			b=c[i]-'0';
			if(b==a[i]) s++;
			else break;
		}
		cout<<s<<endl;
	}
	return 0;
}