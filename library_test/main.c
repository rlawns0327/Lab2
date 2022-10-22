// main.c

#include <stdio.h>
#include "arithmetic.h"

int main(){

    int x,y;

    printf("input two numbers \n");
    scanf("%d %d",&x, &y);

    printf("%d + %d = %d\n",x, y, addition(x,y));
    printf("%d - %d = %d\n",x, y, subtraction(x,y));
    printf("%d * %d = %d\n",x, y, multiplication(x,y));
    printf("%d / %d = %d\n",x, y, division(x,y));

    return 0;
}
