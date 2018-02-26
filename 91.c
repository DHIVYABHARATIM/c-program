#include "stdio.h"

int main(void) 
{
  float  t,v,l,b,h;
  printf("enter the length , breadth , height of a cuboid\n");
  scanf("%f%f%f",&l,&b,&h);
  printf("the volume of the cuboid\n");
  v=l*b*h;
  printf("%f\n",v);
  printf("the total surface area of a cuboid\n");
  t=2*l*b+2*b*h+2*l*h;
  printf("%f",t);
  
  
}
