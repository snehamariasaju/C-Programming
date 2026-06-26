#include <stdio.h>
//compute the perimeter and area of a circle with a given radius
int main()
{
  int area,perimeter,r;
  printf("Enter radius of a circle:");
  scanf ("%d",&r);
  area=3.14*r*r;
  perimeter=2*3.14*r;
  printf("Area of a circle = %d\n",area);
  printf("Perimeter of a circle = %d",perimeter);
    return 0;
}
