#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=39;i++)
    {
        printf("-");
    }

    printf("\n|x = 35                               |\n");
    printf("|                                     |\n");
    printf("|                x = 35               |\n");
    printf("|                                     |\n");
    printf("|                               x = 35|\n");
    for(j=1;j<=39;j++)
    {
        printf("-");
    }
    printf("\n");
    return 0;
}
