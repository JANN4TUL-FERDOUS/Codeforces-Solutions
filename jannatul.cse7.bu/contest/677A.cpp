#include<iostream>
using namespace std;
int main(){
     int n,i,b=0,h;
     int a;
     cin>> n>>h;
     while(n--){
        cin >> a;
        if(a>h) i=2;
        else i=1;
        b+=i;
    }

    cout << b;
    return 0;
}