#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
//ll b[N],a[N];
int a[4]={-1,1,0,0};
int b[4]={0,0,-1,+1};
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	 ll n,a,b,i,j,s=0,s2=0,z=0;
    	 cin>>a>>b;
    	 if(a==1 || b==1){
    	 	cout<<"1\n";
    	 	cout<<a<<" "<<b<<endl;
    	 }
    	 else{
    	 	cout<<"2\n";
    	 	if(a!=1) {
    	 		cout<<1<<" "<<b-1<<"\n";
    	 		cout<<a<<" "<<b<<"\n";
    	 	}
    	 	else{
    	 		cout<<a+1<<" "<<1<<"\n";
    	 		cout<<a<<" "<<b<<"\n";
    	 	}
    	 }
    }
    return 0;
}