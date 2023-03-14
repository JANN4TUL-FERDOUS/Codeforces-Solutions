#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,a=0,x[4];
    for(i=0;i<4;i++){
        cin >>x[i];
    }
    sort(x,x+4);
    cout<<x[3]-x[0]<<" "<<x[3]-x[1]<<" "<<x[3]-x[2];
    return 0;
}