#include <stdio.h>
int main(){
    int a,b,c=0,d=0,e=0,f=0;

    printf("enter any two number: ");
    scanf("%d %d",&a,&b);

    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    
    printf("sum is %d \n",c);
    printf("sub is %d \n",d);
    printf("Multiplication is %d \n",e);
    printf("Division is %d \n",f);
    return 0;
}
