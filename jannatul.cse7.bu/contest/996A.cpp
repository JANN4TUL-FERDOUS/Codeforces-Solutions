#include<iostream>
using namespace std;
int main(){
    int a[5]={100,20,10,5,1};
    int i,n,s=0,x;
    cin >> n;
    for(i=0;i<5;i++){
        if(n>=a[i]){
            s+=n/a[i];
            n%=a[i];
            if(n%a[i]==0) break;

        }
    }
    cout <<s;
    return 0;
 }