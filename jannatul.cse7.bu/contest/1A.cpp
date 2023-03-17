#include<iostream>
using namespace std;
int main(){
    long long int m,n,a,b,c;
    cin >> m >> n >>a;
    if(m%a==0)b=m/a;
    else b=(m/a)+1;
    if(n%a==0) c=n/a;
    else c=(n/a)+1;
    cout << b*c;
    return 0;
}