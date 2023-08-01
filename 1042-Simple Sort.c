#include<stdio.h>
int main()
{
    int a,b,c,A,B,C;

    scanf("%d%d%d",&a,&b,&c);
        A=a;
        B=b;
        C=c;

    if(a<b && a<c)
    {
        if(b<c)
        {
            printf("%d\n%d\n%d\n\n",a,b,c);
            printf("%d\n%d\n%d\n",A,B,C);

        }
        else
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a,c,b,A,B,C);
        }
    }
    else if(b<a && b<c)
    {
        if(a<c)
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",b,a,c,A,B,C);
        }
        else
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",b,c,a,A,B,C);
        }

    }

 else
 {
     if(a<b)
     {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",c,a,b,A,B,C);
     }
     else
     {
         printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",c,b,a,A,B,C);
     }
 }

return 0;
}
