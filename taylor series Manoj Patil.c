#include<stdio.h>
#include<math.h>
#define pi 3.142
void main()
{
    int degree,i;
    float x,nume,denom,term,sum=0;
    printf("Enter the value of Degree\n");
    scanf("%d",&degree);
    x=degree*(pi/180);
    nume=x;
    denom=1;
    i=2;
    do
    {
        term=nume/denom;
        nume=-nume*x*x;
        denom=denom*i*(i+1);
        sum=sum+term;
        i=i+2;
    }
    while(fabs(term)>0.0000001);
    printf("Sin(%d)=%f without using built in fuction\n",degree,sum);
    printf("SIn(%d)=%f using built in function\n",degree,sin(x));
}
