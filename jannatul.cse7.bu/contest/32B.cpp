#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[200];
    cin>>a;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='-'){
            if(a[i+1]=='.') {
                i++;
                cout<<"1";
            }
            else {
                i++;
                cout<<"2";
            }
        }
        else cout<<"0";
    }
    return 0;
}