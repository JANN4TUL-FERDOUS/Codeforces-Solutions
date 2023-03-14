#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>> n;
    for(i=1;i<n;i++){
        if(i%2==1) cout <<"I hate that ";
        else cout <<"I love that ";
    }
    if(n%2==1) cout <<"I hate it";
    else cout<< "I love it";
    return 0;
}