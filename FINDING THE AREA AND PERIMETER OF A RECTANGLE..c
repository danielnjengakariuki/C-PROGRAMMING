//PROGRAM FOR FINDING THE AREA AND PERIMETER OF A RECTANGLE
#include<stdio.h>
    int main()
{
     int length, width, area, perimeter;
     printf("\npleaase input the length:");
     scanf("%d", &length);
     printf("\nplease input the width:");
     scanf("%d", &width);
     area = (length* width);
     printf("the area = %d", &area);
     perimeter = ((length+width)*2);
     printf("\nthe perimeter = %d", &perimeter);
return 0;
}
