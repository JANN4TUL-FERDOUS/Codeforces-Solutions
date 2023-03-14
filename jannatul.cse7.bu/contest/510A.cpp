#include<iostream>
using namespace std;
int main(){
    int i,j,a,b;
    cin >>a>>b;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            if(i%2!=0) cout<<"#";
            else {
             if(i%4==0){
                if(j==1)cout <<"#";
                else cout <<".";
             }
             else{
                if(j==b) cout <<"#";
                else cout <<".";
             }
            }
        }
        cout<<endl;
    }
    return 0;
}