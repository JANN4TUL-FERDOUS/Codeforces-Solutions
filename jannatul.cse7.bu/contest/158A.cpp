#include<iostream>
using namespace std;
int main(){
    int n,k,a[100];
    cin >> n >> k;
    int b=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
                if((a[i]>0)&&(a[i]>=a[k-1]))  b++;
    }
    cout << b;
    return 0;
}