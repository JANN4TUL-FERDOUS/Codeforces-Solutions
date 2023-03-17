#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,z=0,o=0;
    string a;
    cin>>n;
    cin>>a;
    for(int i=0;i<n;i++){
        if(a[i]=='z')z++;
        else if(a[i]=='n') o++;
    }
    for(int i=0;i<o;i++) cout<<"1 ";
    for(int i=0;i<z;i++) cout<<"0 ";
    return 0;
}