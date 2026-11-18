#include<stdio.h>
void tablePrint(int n);
int main()
{
    int n;
    printf("ENTER ANY NUMBER:\n");
    scanf("%d",&n);
    tablePrint(n);
    return 0;
}
void tablePrint(int  n){
    
    for(int i=1;i<=10;i++) {
    printf("%d\n",i*n);
    }
}