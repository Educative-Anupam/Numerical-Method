#include<stdio.h>
int main(){
    float x[100],y[100][100],a,h,u,p,q,sum;
    int i,j,n;
    printf("Enter the number of arguments:");
    scanf("%d",&n);
    printf("Enter the arguments:\n");
    for(i=0;i<n;i++){
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
        printf("y[%d]=",i);
        scanf("%f",&y[i][0]);
    }
    for(j=1;j<n;j++){
        for(i=j;i<n;i++){
            y[i][j]=y[i][j-1]-y[i-1][j-1];
        }
    }
    printf("\n Backward Difference Table:\n\n");
    for(i=0;i<n;i++){
        printf("%f",x[i]);
        for(j=0;j<=i;j++){
            printf("\t%f",y[i][j]);
        }
        printf("\n");
    }
    printf("Enter the value of Interpolating point:\n");
    scanf("%f",&a);
    h=x[2]-x[1];
    u=((a-x[n-1])/h);
    sum=y[n-1][0];
    p=1;
    q=1;
    for(j=1;j<n;j++){
        p=p*j;
        q=q*(u+j-1);
        sum=sum+(q*y[n-1][j]/p);
    }
    printf("The Interpolation value at a=42 is: %f\n",sum);
    return 0;
}