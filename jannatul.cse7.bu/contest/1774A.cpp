#include <bits/stdc++.h>
using namespace std;
int x[27][100005];

int main() {
    int t;
    cin>>t;
    while(t--){
    	int n,i,j,s=0;
    	cin>>n;
    	string a,b;
    	cin>>a;
    	if(a[0]=='1') s++;
    	for(i=1;i<n;i++){
    		if(a[i]=='0') cout<<"+";
    		else{
    			s++;
    			//cout<<s;
    			if(s%2==1) cout<<"+";
    			else cout<<"-";
    		}
    	}
    	cout<<endl;
	}
    return 0;
}