// WAP to over load area(circle,rectangle)function by
// using static member function.

#include<iostream>
using namespace std;
class A
{
static float areac,arear;
public:
static int r,l,b;
void read()
{cout<<"Enter the radius: \n";
cin>>r;
cout<<"Enter the length: \n";
cin>>l;
cout<<"Enter the breadth: \n";
cin>>b;
} 
static void area(int r)
{
areac=3.14*r*r;
} static void area(int l, int b)
{
arear=l*b;
}
void display()
{cout<<"Area of circle: "<<areac<<endl;
cout<<"Area of rectangle: "<<arear<<endl;
}
};
int A::r;
int A::l;
int A::b;
float A::areac;
float A::arear;
int main()
{
A ob;
ob.read();
A::area(A::r);
A::area(A::l,A::b);
ob.display();
return 0;
}