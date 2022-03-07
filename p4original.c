#include<stdio.h>
int input_degree(){
    int n;
    printf("Enter the degree of the polynoial\n");
    scanf("%d",&n);
    return n;
}
float input_x(){
    float x;
    printf("Enter the value of x\n");
    scanf("%f",&x); 
    return x;       
}
void input_coefficients(int n,float a[n]){
    int i;
    for( i=0;i<=n;i++){
        printf("Enter the %d coefficients of x\n",i+1);
        scanf("%f",&a[i]);
    }
}
float evaluate_polynomial(int n, float a[n], float x){
    float temp1=0,temp2,result,temp3;
    temp1=temp1+a[0];
    for(int i=0;i<n;i++){
        temp2=temp1*x;
        temp3=a[i+1]+temp2;
        temp1=temp3;

    }
    return temp1;
}
void output(int n, float a[n], float x, float result){
    printf("The value of ");
    for(int i=0;i<n;i++){
        printf("%.0f +",a[i]);
    }
    printf("%.0f",a[n]);
    printf("is %.2f",result);
}
int main(){
    int n;
    float x,result;
    n=input_degree();
    x=input_x();
    float a[n];
    input_coefficients(n,a);
    result=evaluate_polynomial(n,a,x);
    output(n,a,x,result);
    return 0;
}