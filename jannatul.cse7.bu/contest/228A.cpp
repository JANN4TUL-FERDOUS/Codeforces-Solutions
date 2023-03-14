#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,b;
    int a[5];

    for(i=0;i<4;i++){
        cin>> a[i];
    }
    sort(a,a+4);
    b=0;
    for(i=0;i<4;i++){
        if(a[i]==a[i+1]) b++;
    }
    cout << b<<endl;
    return 0;
 }