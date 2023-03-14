#include<iostream>
using namespace std;
int main(){
    long long n,r=1;
    cin>>n;
    string c[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    while(r*5<n){
        n-=r*5;
        r*=2;
    }
    cout<<c[(n-1)/r]<<endl;
    return 0;
}