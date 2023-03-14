#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j,s=0,s2=0,s3=0,z=0;
		cin>>n;
		int a[n];
		vector<int>v,v2;
		for(i=0;i<n;i++) {
			cin>>a[i];
			if(a[i]%2) {
				v.push_back(i+1);
			}
			else v2.push_back(i+1);	
		
		}
		if(v.size()==0 || (n==3 && v.size()==2)) cout<<"NO\n";
		else {
			cout<<"Yes\n";
			s=0;
			if(v.size()<3){
				s=1;
				cout<<v[0]<<" ";
			}
			else{
				
				for(i=0;i<v.size();i++){
					cout<<v[i]<<" ";
					s++;
					if(s==3) break;
				}
			}
			if(s<3){
				for(i=0;i<v2.size();i++){
					cout<<v2[i]<<" ";
					s++;
					if(s==3) break;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}