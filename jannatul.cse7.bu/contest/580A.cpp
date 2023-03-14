#include<iostream>
using namespace std;
int main(){
    int n,i,s=1,max=0;
    cin>> n;
    int a[n];
    for(i=0;i<n;i++){
        cin>> a[i];
    }
    for(i=0;i<n-1;i++){
        if(a[i+1]>=a[i])s++;
        else {
            if(max<s)max=s;
            s=1 ;
        }

    }
     if(max<s)max=s;
     cout<<max<<endl;
    return 0;
}