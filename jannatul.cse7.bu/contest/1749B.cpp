#include<bits/stdc++.h>
using namespace std;
long long a[200005],b[200005];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		long long s=0,s2=0,s3=0;
		cin>>n;

		for(i=0;i<n;i++) {
			cin>>a[i];
			s+=a[i];
		}
		for(i=0;i<n;i++){
			cin>>b[i];
			s3+=b[i];
			s2=max(s2,b[i]);
			
		}
		s3-=s2;
		cout<<s+s3<<endl;
	}
	return 0;
}