#include<stdio.h>
float temp();
int main()
{
    printf("YOUR TEMPERATURE IN FAHRENHEIT IS %f",temp());
    return 0;
}
float temp()
{
    float f,c;
    printf("ENTER YOUR TEMPERATURE IN CELSIUS\n");
    scanf("%f",&c);
    f=c*1.8+32;
    return f;
}