// WAP to demonstrate the order of call of the constructors and destructors 

#include <iostream>
using namespace std;
class A
{
public:
A()
{
cout << "Constructor called now\n";
}
void fun()
{
cout << "Function Callewd now\n";
}
~A()
{
cout << "Destructor called now\n ";
}
};
int main()
{
A ob;
ob.fun();
return 0;
}