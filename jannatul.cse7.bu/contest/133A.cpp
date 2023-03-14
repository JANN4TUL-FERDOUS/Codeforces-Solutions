#include<bits/stdc++.h>

using namespace std;
int main()
{
    char s[1000];
    int i;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}