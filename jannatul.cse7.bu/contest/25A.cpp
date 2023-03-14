#include<iostream>
using namespace std;
int main(){
    int n,x,y,b=0,c=0,a[102];
    cin>> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i]%2==0){
            b++;
            x=i;
        }
        else{
            c++;
            y=i;
        }
    }
    if(b==1) cout <<x<<endl;
    else if(c==1) cout <<y<<endl;
    return 0;
}