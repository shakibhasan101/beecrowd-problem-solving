#include<stdio.h>
int main()
{
    int a[16]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}, i;
    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");


    for(i=0;i<=7;i++)
    {
        printf("|      %d    |    %o    |       %x       |\n",a[i],a[i],a[i]);
    }
        printf("|      %d    |    %o   |       %x       |\n",a[8],a[8],a[8]);
        printf("|      %d    |    %o   |       %x       |\n",a[9],a[9],a[9]);

    for(i=10;i<=15;i++)
    {
        printf("|      %d   |    %o   |       %x       |\n",a[i],a[i],a[i]);
    }
    printf("---------------------------------------\n");

    return 0;
}
