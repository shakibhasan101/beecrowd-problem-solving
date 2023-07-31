#include<stdio.h>
int main()
{
    float a,b;
    double c,d;

    scanf("%f%f%lf%lf",&a,&b,&c,&d);
    printf("A = %f, B = %f\nC = %lf, B = %f\n",a,b,c,d);
    printf("A = %.1f, B = %.1f\nC = %.1lf, D = %.1f\n",a,b,c,d);
    printf("A = %.2f, B = %.2f\nC = %.2lf, D = %.2f\n",a,b,c,d);
    printf("A = %.3f, B = %.3f\nC = %.3lf, D = %.3f\n",a,b,c,d);
    printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n",a,b,c,d);
    printf("A = %.0f, B = %.0f\nC = %.0lf, D = %.0lf\n",a,b,c,d);
return 0;
}
