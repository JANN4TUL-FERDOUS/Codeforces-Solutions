#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
        int n,s1=0,s2=0,s=0,i;
        string a;
        cin>>n>>a;
        for(i=0;i<n-1;i++){
            s=a[i]-'0';
            if(s>0) s1++,s2+=s;
        }
        s=a[n-1]-'0';
        if(s>0) s2+=s;
        cout<<s2+s1<<endl;
	}
    return 0;
}