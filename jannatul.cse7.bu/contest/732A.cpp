#include<iostream>
using namespace std;
int main(){
    int k,r,s=0,i;
    cin>>k>>r;
    for(i=1;;i++){
        if((k*i)%10==r||(k*i)%10==0){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}