#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=0,c=0,d=0,i,s1=0;
    int s=0;
    cin>>n;
    while(n--){
        cin>>i;
        if(i==1)a++;
        else if(i==2) b++;
        else if(i==3) c++;
        else d++;
    }
    if(a>c){
        a-=c;
        if(a%2!=0) {
            s1=1;
        }
        b+=a/2;
    }

    if(b%2!=0) s1=1;

    s+=b/2+c+d+s1;
    cout<<s<<endl;
    return 0;
}