#include<stdio.h>
void printnum(int n);
int main()
{
    int n;
    printnum(10);
    return 0;
}
void printnum(int n)
{
    if(n==0)
    return;
    printnum(n-1);
    printf("%d\n",n);

}