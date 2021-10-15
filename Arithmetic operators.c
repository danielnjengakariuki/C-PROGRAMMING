#include<stdio.h>
int main()
{
int bananas, apples, grapes, oranges, addition, subtract, multiply, division, remainder;
bananas = 20;
apples = 15;
grapes = 13;
oranges = 17;
addition = (bananas+apples+grapes+oranges);
subtract = (bananas-grapes);
multiply = (apples*oranges),
division = (bananas/apples);
remainder = (bananas%oranges);
printf("addition=%d\n", addition);
printf("subtraction=%d\n", subtract);
printf("multiplication=%d\n", multiply);
printf("division=%d\n", division);
printf("remainder=%d\n", remainder);
}