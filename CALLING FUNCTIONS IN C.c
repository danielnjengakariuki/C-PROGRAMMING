//program to find the volume of a cuboid
#include<stdio.h>
int height, width, A;//"A"represents area

int area()
{
    int length=20;
    int width=15;
    int A;
    
    A=length*width;
    printf("\nthe area is=%d", A);
    return A;
}
int main()
{
    int height, A, volume;
    printf("\nenter the height of the cuboid:");
    scanf("%d", &height);
    volume = area()*(height);
    printf("\nthe volume of the cuboid is=%d",volume);
    return 0;
}
