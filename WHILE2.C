#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i=1;
    printf("ENTER YOUR NUMBER:\n");
    scanf("%d",&n);
    printf("FIBONACCI SERIES:");
    while(i<=n)
    {
        printf("%d\n",a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return 0;
}