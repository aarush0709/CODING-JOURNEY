#include<stdio.h>
#include<math.h>
void power(float n);
int main()
{
    float n;
    printf("ENTER YOUR NUMBER:\n");
    scanf("%f",&n);
    power(n);
    return 0;
}
void power(float n)
{
    printf("YOUR SQUARE IS : %f\n", pow(n,2));
}