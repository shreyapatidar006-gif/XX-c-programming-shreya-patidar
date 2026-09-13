#include <stdio.h>
int main(){
    int a=3, b= a++; //post increment
    printf("%d\n%d\n",a,b);
    int c=6,d=++c; //pre-increment
    printf("%d\n%d",c,d);
    
    return 0;

}