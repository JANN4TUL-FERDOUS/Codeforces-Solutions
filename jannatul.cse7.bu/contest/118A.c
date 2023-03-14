#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[100];
    int i,b;
    scanf("%s",a);

    for(i=0;i<strlen(a);i++){
        if(a[i]<97) a[i]+=97-65;
        if(a[i]!='a'&& a[i]!='e'&& a[i]!='i'&& a[i]!='o'&& a[i]!='u' && a[i]!='y'){
            printf(".%c",a[i]);
        }
    }

    return 0;
}