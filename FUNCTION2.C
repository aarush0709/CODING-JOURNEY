#include<stdio.h>
void namaste();
void bonjour();

int main()
{
    char ch;
    printf("ENTER I IF YOU ARE INDIAN AND F IF YOU ARE FRENCH:\n");
    scanf("%c",&ch);
    if(ch == 'i' || ch == 'I')
    namaste();
    else if(ch == 'f' || ch =='F')
    bonjour();
    else 
    printf("INVALID CHARACTER!");
    return 0;
}
void namaste()
{
    printf("NAMASTE\n");

}
void bonjour()
{
    printf("BONJOUR\n");
}