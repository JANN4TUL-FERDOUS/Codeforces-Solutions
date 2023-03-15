#include<iostream>
using namespace std;
int main(){
    int n,neg=0,z=0;
    long long s=0;
    cin>>n;
    while(n--){
        long long a;
        cin>>a;
        if(a==0) {
            z++;
            s++;
        }
        else if(a>0) s+=a-1;
        else{
            s=s-(a+1);
            neg++;
        }
    }
    if(neg%2!=0 && z==0) s+=2;
    cout<<s<<endl;
    return 0;
}