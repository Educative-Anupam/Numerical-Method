#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x)(x*x*x*x-(x)-10)
#define df(x)((4*x*x*x)-1)
int main(){
    float a,b,c,x;
    printf("Enter the initial value of a:\n");
    scanf("%f",&a);
    printf("Enter the accuracy value(c):\n");
    scanf("%f",&c);
    do{
        b=a;
        x=a-(f(a)/df(a));
        printf("The value of x is: %f \n",x);
        a=x;
    }
    while(fabs(b-a)>c);
    printf("The root is:%f",x);
return 0;
}