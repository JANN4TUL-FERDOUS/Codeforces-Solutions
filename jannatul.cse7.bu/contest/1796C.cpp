#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int l,r,i,j,s=1,s2=0;
    	cin>>l>>r;
    	while((l<<s)<=r) s++;
    	s2=(r/(1<<(s-1)))-l+1;
    	s2+=(s-1)*max(0,((r/(1<<(s-2)))/3)-l+1);
    	cout<<s<<" "<<s2<<endl;    	
    }
	return 0;
}