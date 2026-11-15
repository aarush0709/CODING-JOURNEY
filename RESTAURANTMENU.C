#include<stdio.h>
int main()
{
    int choice,quantity,price,bill;
    printf("RESTAURANT MENU\n");
    printf(" 1 KADHAYI PANEER -- 150 \n");
    printf(" 2 GOBHI MANCHRIAN -- 80 \n");
    printf(" 3 NAAN ROTI -- 50 \n");
    printf(" 4 GHEE RICE -- 100 \n");
    printf("ENTER YOUR CHOICE:\n");
    scanf("%d",&choice);
    printf("ENTER YOUR QUANTITY:\n");
    scanf("%d",&quantity);
    switch(choice)
    {
        case 1 : bill = 150*quantity;
       
        printf("YOUR CHOICE IS 1 AND YOUR BILL IS %d\n",bill);
               break;
       case 2 : bill = 80*quantity;
       
        printf("YOUR CHOICE IS 2 AND YOUR BILL IS %d\n",bill);
            break;
       case 3 : bill = 50*quantity;
       
        printf("YOUR CHOICE IS 3 AND YOUR BILL IS %d\n",bill);
                break;
       case 4 : bill = 100*quantity;
       
        printf("YOUR CHOICE IS 4 AND YOUR BILL IS %d\n",bill);
                 break;
       default : printf("INVALID OPTION:\n");
    }
    return 0;
}