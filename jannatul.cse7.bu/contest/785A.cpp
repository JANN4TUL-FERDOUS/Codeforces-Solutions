#include<iostream>
using namespace std;
int main(){
    long n;
    int i,s=0;
    char a[100];
    cin >> n;
    for(i=0;i<n;i++){
        cin >>a;
        if(a[0]=='I') s+=20;
        else if(a[0]=='D') s+=12;
        else if(a[0]=='O') s+=8;
        else if(a[0]=='C') s+=6;
        else if(a[0]=='T') s+=4;
    }
    cout <<s<<endl;
    return 0;
}