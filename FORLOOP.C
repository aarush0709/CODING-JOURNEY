#include<stdio.h>
int main()
{
    int sum=0, n;
    printf("ENTER YOUR NUMBER:\n");
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
        { sum = sum+i;
        printf("SUM = %d\n",sum);
        }
    return 0;
}
