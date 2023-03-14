#include<iostream>
using namespace std;
int main(){
    long int n,i;
    cin >> n;
    if(n%2==0){
        cout<<n-4<<" "<<4;
    }
    else {
        cout <<n-9<<" "<<9;
    }
    return 0;
}