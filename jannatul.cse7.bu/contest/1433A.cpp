#include<iostream>
using namespace std;
int main(){
    int t,a,i,j,b;
    cin>>t;
    while(t--){
        i=0;j=0;
        cin>>a;
        b=a%10;
        while(a>0){
            a/=10;
            i++;
            j+=i;
        }
        cout<<10*(b-1)+j<<endl;
    }
    return 0;
}