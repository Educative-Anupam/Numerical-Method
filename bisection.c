#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x)((x*x*x)-(x)-4)
float main(){
    float a,b,c,h,x;
    printf("Enter the values of a:\n");
    scanf("%f",&a);
    printf("Enter the values of b:\n");
    scanf("%f",&b);

    if(f(a)*f(b)>0){
    exit(0);}
    else{
        do{
            c=(a+b)/2;
            if(f(c)<0)
            a=c;
            else
            b=c;
            h=(a+b)/2;
            printf("The Result is: %f\n",h);
        }
        while(fabs(h-c)>0.0001);
        printf("The final value of h:%f\n",h);
    }
    return 0;
}
