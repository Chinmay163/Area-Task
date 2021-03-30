#include <iostream>
#include<math.h>

using namespace std;

float area (float r)
{
cout << "Area of the circle with radius "<<r<<"is : "<< 3.14*r*r<<"\n";
}

float area (float x,float y,float z)
{
float a=0,s=0;
s=(x+y+z)/2;
a=s*(s-x)*(s-y)*(s-z);

cout << "Area of the triangle with sides "<<x<<", "<<y<<" & "<<z<< " is : " << sqrt(a)<<"\n";
}

float area (float l,float w)
{
cout<< "Area of the rectangle with length "<<l<<" and width "<<w<<" is : "<<l*w<<"\n";
}

int main()
{
char loop ;
do{
char shape;
float x=0,y=0,z=0,r=0,l=0,w=0;

cout << "Of which shape do you want to find the area of triangle(t), circle(c) or rectangle(r)? \n";
cin>>shape;

if(shape == 't')
{
  cout<< "Enter the 1st side of the triangle : ";
  cin>>x;
  cout<< "Enter the 2nd side of the triangle : ";
  cin>>y;
  cout<< "Enter the 3rd side of the triangle : ";
  cin>>z;
  area (x,y,z);
}
else if(shape == 'c')
{
  cout<< "Enter the radius of the circle : ";
  cin>>r;
  area(r);
}
else if(shape == 'r')
{
  cout<< "Enter the length of the rectangle : ";
  cin>>l;
  cout<< "Enter the width of the rectangle : ";
  cin>>w;
  area(l,w);
}
else{cout<<"!!! Choose a valid shape ID !!!";};

cout << "Do you want to continue (y/n)? ";
cin>>loop;
cout<< "\n";
}
while (loop == 'y');


return 0;
}
