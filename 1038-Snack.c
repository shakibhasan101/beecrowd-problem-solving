#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);

    switch(X)
    {
        case 1: printf("Total: R$ %.2f\n", (float)Y*4);
        break;
        case 2: printf("Total: R$ %.2f\n", (float)Y*4.50);
        break;
        case 3: printf("Total: R$ %.2f\n", (float)Y*5);
        break;
        case 4: printf("Total: R$ %.2f\n", (float)Y*2);
        break;
        case 5: printf("Total: R$ %.2f\n", (float)Y*1.5);
        break;
    }
    return 0;
}
