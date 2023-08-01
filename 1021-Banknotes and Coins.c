#include<stdio.h>
int main()
{
    long float N,nota100,nota50,nota20,nota10,nota5,nota2;
    scanf("%lf",&N);

    nota100= N/100;
    temp= N%100;

    nota50=temp/50;
    temp=temp%50;

    nota20=temp/20;
    temp=temp%20;

    nota10=temp/10;
    temp=temp%10;

    nota5=temp/5;
    temp=temp%5;

    nota2=temp/2;
    temp=temp%2;

    printf("%d nota(s) de R$ 100.00\n",nota100);

    return 0;
}
