#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j;
    long long s;
    cin>>t;
    while(t--){
        s=0;
        cin>>i>>j;
        if(i<j) swap(i,j);
        s=j*2;
        if(i!=j ){
            s++;
            i--;
            s+=(i-j)*2;
        }
        cout<<s<<endl;
        s=0;
    }
    return 0;
}