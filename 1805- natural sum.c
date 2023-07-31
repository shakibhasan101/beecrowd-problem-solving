#include<stdio.h>
int main()
{
    long long int A,B;
    scanf("%lld%lld",&A,&B);

    printf("%lld\n",(B*(B+1)-A*(A-1))/2);
    return 0;
}
