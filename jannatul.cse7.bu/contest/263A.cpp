#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int x,a=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> x;
            if(x==1){
                a=abs(i-2)+abs(j-2);
            }
        }

    }
    cout<< a<<endl;
    return 0;
}