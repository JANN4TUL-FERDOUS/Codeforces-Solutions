#include <bits/stdc++.h>
using namespace std;
const int nn=1e5+7;
#define ll long long 
int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	string a,b;
    	cin>>a>>b;
    	int i,z=0;
    	map<string,int>m,mp;
    	//map<char,int>mp;
    	for(i=1;i<(int)a.length();i++){
			string c;
			c+=a[i-1];
			c+=a[i];
			m[c]++;   	
    	}
    	char ch,ch2;
    	for(i=1;i<(int)b.length();i++){
    		 string c;
    		 c+=b[i-1];
    		c+=b[i];
    		ch=b[i-1];ch2=b[i];
    		if(m[c]>0) {z=1;break;}
    	}
    	if(a[0]==b[0]) cout<<"YES\n"<<a[0]<<"*\n";
    	else if(a[a.length()-1]==b[b.length()-1]) cout<<"YES\n"<<"*"<<a[a.length()-1]<<"\n";	
    	else if(z==1) cout<<"YES\n"<<"*"<<ch<<ch2<<"*\n";
    	else cout<<"NO\n";
	}
    return 0;
}