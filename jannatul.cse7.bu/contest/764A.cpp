#include<iostream>
using namespace std;
int main(){
    int n,m,z,s=0,i,j;
    cin>>n>>m>>z;
    for(i=1;i*n<=z;i++){
        for(j=1;j*m<=z;j++){
            if(i*n==j*m) {
                s++;
                break;
            }
            if(j*m>i*n) break;
        }
    }
    cout<<s<<endl;
    return 0;
}