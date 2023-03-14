#include<iostream>
using namespace std;
int main(){
    int n,i,a,b,s;
    cin >> n;
    for(i=0;i<n;i++){
        s=0;
        cin >> a>>b;

        if(a%b!=0)
            s=b-a%b;
        cout << s<<endl;
    }
    return 0;
}