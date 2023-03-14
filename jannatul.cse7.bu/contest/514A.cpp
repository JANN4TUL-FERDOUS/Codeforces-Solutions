#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    if(a[0]>'4' && a[0]!='9') a[0]='9'-a[0]+'0';
    for(int i=1;i<a.length();i++){
        if(a[i]>'4') a[i]='9'-a[i]+'0';
    }
    cout<<a;
    return 0;
}