#include<stdio.h>
int factorial(int n);
int main()
{
     printf("YOUR FACTORIAL IS %d\n",factorial(10));
     return 0;
}
int factorial(int n)
{
    if(n==1){
        return 1;
    }
    int factnm1 = factorial(n-1);
    int factn = factorial(n-1)*n;
    return factn;

}