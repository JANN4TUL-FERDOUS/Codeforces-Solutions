#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s1=0,s2=0;
    char a[100],b[100],c[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(i==0)  strcpy(b,a);
        if(strcmp(a,b)==0){
            s1++;
        }
        else {
            s2++;
            strcpy(c,a);
        }
    }
    if(s1>s2)cout<<b;
    else cout<<c;

    return 0;
}