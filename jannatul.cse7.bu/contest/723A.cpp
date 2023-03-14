#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,a[3],res;
    for(i=0;i<3;i++){
         cin>>a[i];
    }
    sort(a,a+3);
    res=(a[1]-a[0])+abs(a[1]-a[2]);
    printf("%d\n",res);
    return 0;
}