#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100];
    cin >> a;
    int l=strlen(a);
    for(int i=0;i<l;i=i+2){
        for(int j=0;j<l-i-2;j=j+2){
            if(a[j]>a[j+2]){
                swap(a[j],a[j+2]);
            }
        }
    }
    cout<<a<<endl;
    return 0;
}