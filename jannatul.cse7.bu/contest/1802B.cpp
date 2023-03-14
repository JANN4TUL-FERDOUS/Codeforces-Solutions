#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
	int l=t;
	while(t--){
		//cout<<"Case :"<<l-t<<endl;
		int n,i,j,z=0,s=0,s2=0,z2=0,m=0;
		cin>>n;
		int a;
		for(i=0;i<n;i++){
			cin>>a;
			if(a==1) {s++;s2++;}
			else{
				if(s2>1) s=1;
				s+=(s2/2);
			}
			//cout<<m<<" "<<s<<" "<<s2<<endl;
			m=max(m,s);
		}
		cout<<m<<endl;
	}
	return 0;
}