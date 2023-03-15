#include<iostream>
using namespace std;
int main(){
    int n,i=2,j=0;
    cin>>n;
    string a;
    cin>>a;
    cout<<a[0];
    while(1){
        j+=i;
        if(j>=n) break;
        cout<<a[j];
        i++;
     }
    cout<<endl;
    return 0;
}