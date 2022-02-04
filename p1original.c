#include<stdio.h>

typedef struct _points
{
  float abscissa;
  float ordinate;
  float distance;
}Coordinate;

Coordinate input_coordinates()
{
  Coordinate p;
  printf("Enter value of A and B  where (A,B) is a coordinate point \n");
  scanf("%f%f", &p.abscissa,&p.ordinate);
  return p;
}

float the_sqrt(float n)
{
  float z;
  double sqrt =0,i,x;
  i=n/2;
  while (i<n){
    x=(i + n/i)/2;
    z=x;
    if(z==i){
      sqrt=z;
      return sqrt;
    }
    else
    i=z;
    
  }
  return sqrt;
}

Coordinate distance_btw(Coordinate a,Coordinate b,Coordinate d)
{
  // sqrt(a^2 +b^2)
  // a^=x1 - x2
  // b^2=y1 - y2
  int m,n,r;
  m=a.abscissa +b.abscissa;
  n=a.ordinate +b.ordinate;
  r=(m*m) + (n*n);
  d.distance=the_sqrt(r);
  return r;
}

void output(Coordinate a,Coordinate b,Coordinate r)
{
  printf("the distance b/w the points (%0.2f,0.2f) and (%0.2f,%0.2f) is %0.3f",a.abscissa,a.ordinate,b.abscissa,b.ordinate,r.distance);
}

int main()
{
  Coordinate j,k,c;
  j=input_coordinates();
  k=input_coordinates();
  c=distance_btw(j,k,c);
  output(j,k,c);
  return 0;
}