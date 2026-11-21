#include<stdio.h>
char alphabet(char* p);
int main()
{
    char ch = 'A';
    alphabet(&ch);
    return 0;
}
char alphabet(char* p)
{
    for(*p='A';*p<='Z';(*p)++)
    {
        printf("%c\n",*p);
    }
}