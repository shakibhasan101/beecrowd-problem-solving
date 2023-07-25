#include<stdio.h>
int main()
{
    int N,hours,minutes, seconds;

    scanf("%d",&N);

    minutes=N/60;
    seconds=N%60;
    hours=minutes/60;

    printf("%d:%d:%d\n",hours,minutes%60,seconds);
    return 0;
}
