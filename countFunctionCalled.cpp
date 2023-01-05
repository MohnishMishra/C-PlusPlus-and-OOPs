// Create a class with an integer data member. Include
// functions for input and output in
// class. Count the number of times each function is called
// and display it.

#include <iostream>
using namespace std;
class A
{
static int c;
static void countt()
{
c++;
}
public :
static void display()
{
countt();
cout << c << endl;
}
};
int A :: c;
int main()
{
A :: display();
A :: display();
A :: display();
A :: display();
A :: display();
return 0;
}