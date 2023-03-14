#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],i,s=1,b[n],j=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        if(a[i]==1){
            s++;
            b[j++]=a[i-1];
        }
     }
     cout<<s<<endl;
     for(i=0;i<j;i++) cout<<b[i]<<" ";
     cout<<a[n-1];
     return 0;
 }