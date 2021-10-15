/*Arithmetic operators perimeter of a rectangle*/
#include <stdio.h>
int main (){
    int length,width,perimeter;
    printf("\n enter value to length:");
    scanf("%d", &length);
    printf("\n enter value to width:");
    scanf("%d", &width);
    perimeter=((2*length)+(2*width));
    printf("\n perimeter=%d", perimeter);
return 0;
}