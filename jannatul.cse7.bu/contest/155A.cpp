#include<iostream>
using namespace std;
int main(){
    int r,i,t,min,max;
    cin >> t;
    int a[t];
    for(i=0;i<t;i++){
        cin >> a[i];
    };
    max=a[0];
    min=a[0];
    r=0;
    for(i=0;i<t;i++){
        if(a[i]>max){
            r++;
            max=a[i];
        }
        if(a[i]<min){
            r++;
            min=a[i];
        }
    }
    cout<<r<<endl;
    return 0;
}