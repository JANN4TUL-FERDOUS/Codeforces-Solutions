#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s=0,m=0;
    cin>> n;
    for(i=1;i<=n;i++){
        m+=i;
        s+=m;
        if(s==n){
            cout<<i<<endl;
            break;
        }
        else if(s>n) {
            cout<<i-1<<endl;
            break;
        }
    }
    return 0;
}