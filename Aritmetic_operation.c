#include <stdio.h>
int main(){
    int a,b,c=0,d=0;

    printf("enter any two number: ");
    scanf("%d %d",&a,&b);

    c=a+b;
    d=a-b;
    
    printf("sum is %d \n",c);
    printf("sub is %d \n",d);
    return 0;
}