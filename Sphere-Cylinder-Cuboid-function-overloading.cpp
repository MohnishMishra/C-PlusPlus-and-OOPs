// WAP to find volume of a sphere, a cylinder and a cuboid using
// function overloading.

#include<iostream>
using namespace std;
int main()
{
int vol(int);
double vol(int ,double);
int vol(int ,int, double);
cout<<vol(3)<<endl;
cout<<vol(3,6.0)<<endl;
cout<<vol(3,6,9.0)<<endl;
return 0;
}
int vol(int a)
{
int s=4*22*a*a*a;
return (s/21);
}
double vol(int p,double q)
{
int r=22*p*p*q;
return (r/7);
}
int vol(int c,int d,double e)
{
return (c*d*e);
}