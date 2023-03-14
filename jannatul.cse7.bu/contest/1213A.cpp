#include<iostream>
using namespace std;
int main(){
    int n,e=0,o=0;
    cin>>n;
    while(n--){
        long long a;
        cin>>a;
        if(a%2==0) e++;
        else o++;
    }
    cout<<min(e,o);
    return 0;
}