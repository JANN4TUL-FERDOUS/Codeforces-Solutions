#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int nn=2e5+7;
//int a[nn];
vector<int>v;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){    	
	    int n,i,j,s=0,s2=0;
	    cin>>i>>j;
	    i=abs(i);
	    j=abs(j);
	    s=i+j;
	    //cout<<s<<" "<<i<<" "<<j<<endl;
	    if(i>j)swap(i,j);
		j-=i;
		 if(j>1)s+=(j-1);
	    cout<<s<<"\n";
    }
	return 0;
}