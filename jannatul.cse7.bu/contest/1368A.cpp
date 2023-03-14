#include<iostream>
using namespace std;
int main(){
    int t,i;
    long a,b,n;
    cin>>t;
    while(t--){
        i=0;
        cin>>a>>b>>n;
        long sum=0;
        while(n>=sum){
            if(a>b){
                i++;
                b+=a;
                sum=b;
            }
            else{
                i++;
                a+=b;
                sum=a;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}