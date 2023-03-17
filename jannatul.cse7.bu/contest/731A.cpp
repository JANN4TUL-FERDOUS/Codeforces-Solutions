#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100];
    cin>>a;
    int s=0;
    int x=97,diff;
    for(int i=0;i<strlen(a);i++){
        diff=abs(a[i]-x);
        if(diff>13) diff=26-diff;
        s+=diff;
        x=a[i];
    }
    cout<<s;
    return 0;

}