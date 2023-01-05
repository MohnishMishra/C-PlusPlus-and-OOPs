// WAP to find area of a circle,a rectangle and a triangle using
// concept of function overloading.

#include<iostream>
using namespace std;
int main()
{
int area(int);
double area(int,double);
int area(int,int);
cout<<area(2)<<endl;
cout<<area(2,3.0)<<endl;
cout<<area(2,3)<<endl;
return 0;
}int area(int p)
{
return (3.14*p*p);
}
double area(int p,double q)
{
return (p*q);
}int area(int p,int q)
{
return (0.5*p*q);
}