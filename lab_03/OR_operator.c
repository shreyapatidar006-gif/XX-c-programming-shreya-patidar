#include <stdio.h>
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    if (a>0 || b>0){
        printf("at least one of them is positive");

    }
    else {
        printf("both of them is negative");
    }
    return 0;
}
