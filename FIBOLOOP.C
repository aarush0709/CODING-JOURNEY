#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("ENTER THE NUMBER OF TERMS:\n");
    scanf("%d",&n);
    printf("FIBONACCI SERIES:\n");
    for(i=1;i<=n;i=i+1){
        printf("%d",a);
    c = a + b;
    a = b;
    b = c;}
    return 0;

}