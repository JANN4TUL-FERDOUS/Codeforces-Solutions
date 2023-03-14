#include <bits/stdc++.h>
using namespace std;
const int nn=1e6+2;
int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n,k,i,s2=0,z=0;
	    cin>>n;
	    string a,b;
	    cin>>a;
	    if(a[0]=='M' || a[0]=='m') b+='m';
	    else z=1;
	    for(i=1;i<n;i++){	    	
	    	if((a[i-1]!='M' && a[i-1]!='m' )&& (a[i]=='M' || a[i]=='m')) b+='m';
	    	else if((a[i-1]!='E' && a[i-1]!='e') && (a[i]=='E' || a[i]=='e')) b+='e';
	    	else if((a[i-1]!='O' && a[i-1]!='o') && (a[i]=='O' || a[i]=='o')) b+='o';
	    	else if((a[i-1]!='W' && a[i-1]!='w') && (a[i]=='W' || a[i]=='w')) b+='w';
	    	else if(a[i]!='M' && a[i]!='m' && a[i]!='e'&& a[i]!='E' && a[i]!='O' && a[i]!='o'&& a[i]!='w' && a[i]!='W'){
	    		z=1;break;
    		}
    	}
	    if(z==0 && b=="meow") cout<<"YES\n";
	    else cout<<"NO\n";
    }
	return 0;
}