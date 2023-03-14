#include<stdio.h>
int main()
{
    int n;
    char a[200],b[200];
    gets(a);
    gets(b);
    n=strcmpi(a,b);
    printf("%d\n",n);

    return 0;
}