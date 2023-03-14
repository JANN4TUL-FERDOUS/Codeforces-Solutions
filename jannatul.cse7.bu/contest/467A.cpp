#include<iostream>
using namespace std;
int main(){
    int n,p,q,i=0;
    cin >> n;
    while(n--){
        cin >> p >>q;
        if(q-p>=2) i++;
    }
    cout << i<<endl;
    return 0;
}