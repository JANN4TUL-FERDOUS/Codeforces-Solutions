#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double s=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        s+=1.0/(double)i;
    }
    printf("%.12lf",s);
    return 0;
}