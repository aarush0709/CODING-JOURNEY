#include<stdio.h>
float percentage(int maths,int science,int hindi);
int main()
{
    int maths,science,hindi;
    printf("ENTER YOUR MARKS IN MATHS:\n");
    scanf("%d",&maths);
    printf("ENTER YOUR MARKS IN SCIENCE:\n");
    scanf("%d",&science);
    printf("ENTER YOUR MARKS HINDI:\n");
    scanf("%d",&hindi);
    printf("YOUR PERCENTAGE IS %.2f%%",percentage(maths,science,hindi));
    return 0;
}
float percentage(int maths,int science,int hindi)
{
    float result = ((maths+science+hindi)/300.0)*100;
    return result;
}