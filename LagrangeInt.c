#include<stdio.h>
int main(){
    float x[20],y[20],a,p;
    int i,j,n,sum=1;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("x[%d]= ",i);
        scanf("%f",&x[i]);
    }
    for(j=0;j<n;j++){
        printf("y[%d]= ",j);
        scanf("%f",&y[j]);
    }
    printf("Enter the value of interpolating point:\n");
    scanf("%f",&a);
    for(i=0;i<n;i++){
        p=1;
        for(j=0;j<n;j++){
            if(i!=j){
                p=p*(a-x[j])/(x[i]-x[j]);
            }
        }
        sum=sum+p*y[i];
    }
    printf("Required value:%d\n",sum);
    return 0;
 }