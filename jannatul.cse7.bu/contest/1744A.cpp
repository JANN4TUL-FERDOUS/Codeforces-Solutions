#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	int l=t;
	while(t--){
        int n,i,j,s=0,k,s2=0,x=0,x2=0;
        cin>>n;
        int a[n];
        map<int ,char>m;
        for(i=0;i<n;i++) {
            cin>>a[i];
            m[a[i]]='0';
        }
        string c;
        cin>>c;
        for(i=0;i<n;i++){
			if(m[a[i]]=='0' ){
                m[a[i]]=c[i];
            }
            else if(m[a[i]]!=c[i]){
					s=1;break;}
        }
        if(s==0) cout<<"YES\n";
        else cout<<"NO\n";
 
	}
	return 0;
}