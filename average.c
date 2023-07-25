#include<stdio.h>
int main()
{
    double A,B, MEDIA;
    scanf("%lf %lf",&A,&B);


    if(0<=A && A<=10 && 0<=B&&B<=10 )
        {
            MEDIA= (A+B)/2;
            printf("MEDIA = %.5lf\n", MEDIA);
        }
        else{printf("Wrong credential \n");}


return 0;
}
