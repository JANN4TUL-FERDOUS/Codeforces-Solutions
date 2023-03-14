#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,r;
    cin>>n>>l>>r;
    int x=r;
    long long i=1,max=0,min=n-l;
    while(l--){
        min+=i;
        i*=2;
    }
    i=1;
    while(r--){
        max+=i;
        i*=2;
    }
    cout<<min<<" "<<max+(i/2)*(n-x)<<endl;
    return 0;
}