#include<iostream>
using namespace std;
int main(){
    int n,i,s=0;
    string a;
    cin>>n;
    int b[n],j=0,s1=0;
    cin>>a;
    for(i=0;i<n;i++){
        if(a[i]=='W'){
            if(s1>0){
                b[j++]=s1;
                s++;
            }
            s1=0;
        }
        else s1++;
    }
    if(a[n-1]=='B'){
        s++;
        b[j++]=s1;
    }
    cout<<s<<endl;
    for(i=0;i<j;i++) cout<<b[i]<<" ";
    return 0;
}