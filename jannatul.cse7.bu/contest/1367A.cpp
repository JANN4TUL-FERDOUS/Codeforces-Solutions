#include<iostream>
using namespace std;
int main(){
    int i,x=0,t;
    string a;
    cin >> t;
    for(i=0;i<t;i++){
        cin >> a;
        x=a.length();
        if(x>2){
            cout<<a[0];
            for(int j=0;j<x;j++){
                if(j%2!=0)
                cout<<a[j];
            }
        }
        else cout<<a;
        cout<<endl;

    }
    return 0;
}