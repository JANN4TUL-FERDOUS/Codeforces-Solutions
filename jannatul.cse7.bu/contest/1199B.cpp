#include<bits/stdc++.h>
using namespace std;
int main(){
    long long h,l;
    cin>>h>>l;
    double s=(l*l-h*h)/(double)(2*h);
    printf("%.13lf",s);
    return 0;
}