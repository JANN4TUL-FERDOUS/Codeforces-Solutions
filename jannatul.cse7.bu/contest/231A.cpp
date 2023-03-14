#include<iostream>
using namespace std;
int main(){
    int n,a[3],b=0,c=0;
    cin >> n;
    while(n--){
        for(int i=0;i<3;i++){
            cin >> a[i];
        }

        b=0;
        for(int i=0;i<3;i++){
            if(a[i]==1) b++;
         }
         if(b>=2) c++;
    }
    cout << c <<endl;

     return 0;
 }