#include<iostream>
using namespace std;
int main(){
    long long int n,s=0;
    cin>>n;
    while(n>0){
        if(n%2==0) n/=2;
        else{
            s++;
            n--;
        }
    }
    cout<<s;
    return 0;
}