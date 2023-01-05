// WAP in c++ to design a class complex having data member real and
// imaginary.Use appropriate member function to perform i/o operations.
// Create two objects and add them and store the result in the third object.

#include<iostream>
using namespace std;
class complex
{
int real;
int imag;
public:
void input()
{cout<<"Enter real part: ";
cin>>real;
cout<<"Enter imaginary part: ";
cin>>imag;
}
void sum(complex S,complex A)
{real=S.real+A.real;
imag=S.imag+A.imag;
}
void output()
{cout<<real<<"+ i"<<imag<<endl;
}
};
int main()
{
complex ob1,ob2,ob3;
ob1.input();
ob2.input();
ob3.sum(ob1,ob2);
ob3.output();
return 0;
}