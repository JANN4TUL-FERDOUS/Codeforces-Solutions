#include <bits/stdc++.h>
using namespace std;
int x[27][100005];

int main() {
    int t;
    cin>>t;
    int i,s=1,j=0;
   	map<int,int>m;
   	while(s<1000){
    	s+=j;
    	m[j]=s;
    	j++;
    }
    //cout<<j<<endl;
    while(t--){
    	int n,k,z=0;
    	cin>>k>>n;
    	z=k-1,i=0;
    	while((m[z]+k-z-1)>n && z>=0){
    		//cout<<m[z]<<" "<<k-z<<endl;
    		z--;
    	}
    	for(i=0;i<=z;i++) cout<<m[i]<<" ";
    	int y=m[z]+1;
    	for(;i<k;i++){cout<<y<<" ";y++;}
    	cout<<endl;
	}
    return 0;
}