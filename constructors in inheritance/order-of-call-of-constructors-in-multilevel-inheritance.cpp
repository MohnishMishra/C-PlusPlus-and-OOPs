// WAP to demonstrate the order of the call of the constructors and destructors in case of
// multi-level inheritance 

#include<iostream>
using namespace std;
class A
{
protected:
int a;
public:
A()
{
cout << "Constructor of Grandparent Class A Called " << endl;
}
~A()
{
cout << "Destructor of Grandparent Class A Called " << endl;
}
};
class B : public A
{
protected:
int b;
public:
B()
{
cout << "Constructor of Parent Class B Called " << endl;
}
~B()
{
cout << "Destructor of Parent Class B Called " << endl;
}
};
class D : public B
{
protected:
int d;
public:
D()
{
cout << "Constructor of Child Class D Called " << endl;
}
~D()
{
cout << "Destructor of Child Class D Called " << endl;
}
};
int main()
{
cout << "Multilevel : \n" << endl;
D obd;
}
