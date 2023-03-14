#include<iostream>
using namespace std;
int main(){
    int n,i,a=1;
    cin >> n;
    int b[n];
    for(i=0;i<n;i++){
        cin >> b[i];
    }
     for(i=0;i<n-1;i++){
        if(b[i]!=b[i+1]){
            a++;
        }
    }
    cout << a<<endl;
    return 0;
}