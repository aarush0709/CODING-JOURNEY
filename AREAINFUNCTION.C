#include<stdio.h>
void squareArea();
void rectangleArea();
void circleArea();

int main()
{
    char ch;
    printf("ENTER S FOR AREA OF SQUARE , R FOR RECTANGLE AND C FOR CIRCLE:\n");
    scanf("%c",&ch);
    if(ch =='s' || ch =='S')
    {
        squareArea();
    }
    else if(ch == 'r' || ch == 'R')
    {
        rectangleArea();
    }
    else if(ch == 'c' || ch == 'C')
    {
        circleArea();
    }
    else
    printf("INVALID CHARACTER %c",ch);
    return 0;
}
void squareArea()
{
    float side;
    printf("ENTER YOUR SQUARE SIDE:\n");
    scanf("%f",&side);
    printf("YOUR AREA IS %f",side*side);
}
void rectangleArea()
{
    float length,breadth;
    printf("ENTER YOUR LENGTH AND BREADTH:\n");
    scanf("%f%f",&length,&breadth);
    printf("YOUR AREA IS %f",length*breadth);
}
void circleArea()
{
    float radius;
    printf("ENTER YOUR RADIUS:\n");
    scanf("%f",&radius);
    printf("YOUR AREA IS %f",3.14*radius*radius);
}