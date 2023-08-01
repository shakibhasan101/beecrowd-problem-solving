#include<stdio.h>
int main()
{
    float A,newSalary,moneyEarned;
    scanf("%f", &A);

    if(0<A && A<=400)
    {

        newSalary = A+(A*.15);
        moneyEarned = newSalary - A;

        printf("Novo salario: %.2f\n",newSalary);
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: 15 %%\n");
    }

    else if(400<A && A<=800)
    {

        newSalary = A+(A*.12);
        moneyEarned = newSalary - A;

        printf("Novo salario: %.2f\n",newSalary);
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: 12 %%\n");
    }

    else if(800<A && A<=1200)
    {

        newSalary = A+(A*.10);
        moneyEarned = newSalary - A;

        printf("Novo salario: %.2f\n",newSalary);
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: 10 %%\n");
    }

    else if(1200<A && A<=2000)
    {

        newSalary = A+(A*.07);
        moneyEarned = newSalary - A;

        printf("Novo salario: %.2f\n",newSalary);
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: 7 %%\n");
    }

    else
    {

        newSalary = A+(A*.04);
        moneyEarned = newSalary - A;

        printf("Novo salario: %.2f\n",newSalary);
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
