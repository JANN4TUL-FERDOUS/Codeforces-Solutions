#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,a;
    double d=0.0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a;
        d+=a;
    }

   printf("%.12lf\n",d/n);
    return 0;
}