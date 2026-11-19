#include<stdio.h>
int sum(int n);
int main()
{
    printf("YOUR SUM IS %d\n",sum(10));
}
int sum(int n)
{
    if(n==1)
    {
    return 1;
    }
    int sumnm1 = sum(n-1);
    int sumn = sum(n-1)+n;
    return sumn;
}