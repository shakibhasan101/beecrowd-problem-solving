#include<stdio.h>
int main()
{
    int X,Y;
    while(scanf("%d.%d",&X,&Y)!=EOF)
    {
        printf("%d.%d\n",Y,X);
    }
    return 0;
}
