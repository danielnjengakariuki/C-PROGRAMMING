//program for finding the surface area and volume of a sphere
#include<stdio.h>
int main()
{
double radius, surface_area, volume;
printf("\nplease input the radius");
scanf("\n%lf", & radius);
surface_area=(4*3.142*radius*radius);
printf("\n the surface_area=%lf", & surface_area);
volume=(4/3*3.142*radius*radius*radius);
printf("\n the volume=%lf", & volume);
}