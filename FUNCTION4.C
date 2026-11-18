#include<stdio.h>
void calculatePrice(float value);
int main()
{
    float value = 200;
    calculatePrice(value);
    return 0;
}
void calculatePrice(float value)
{
    value = value + (0.18*value);
    printf("YOUR FINAL PRICE IS : %f\n", value);
}