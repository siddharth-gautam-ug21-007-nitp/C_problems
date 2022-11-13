#include <stdio.h>
int main(){
    int r,a,b;

    int p=3.14;
    printf("enter the Radius of circle: ");
    scanf("%d",&r);
    
    a=p*r*r;
    b=2*p*r;

    printf("area of circle is %d\n",a);
    printf("perimeter of circle is %d",b);


return 0;
}