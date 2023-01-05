// WAP to implement inline function Area() which calculate area of a circle with given radius value as arguement 

#include<iostream>
using namespace std;
inline float area(int r)
{
return (3.14*r*r);
}
int main()
{
int rad;
cout<<"Enter radius of the circle\n";
cin>>rad;
cout<<"Area of the circle is "<<area(rad)<<endl;
}