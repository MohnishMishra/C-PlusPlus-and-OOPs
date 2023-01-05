// WAP in c++ to design a class complex having data member
// real and imaginary.Use apppropriate member function to perform
// i/o operations.
// Create two objects and add them.

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
void output(complex S,complex A)
{real=S.real+A.real;
imag=S.imag+A.imag;
cout<<"Sum is: "<<S.real<<"+i"<<S.imag<<endl;
}
};
int main()
{
complex ob1,ob2;
ob1.input();
ob2.input();
ob1.output(ob1,ob2);
return 0;
}