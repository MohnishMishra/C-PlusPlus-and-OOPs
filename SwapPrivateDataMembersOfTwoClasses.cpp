// WAP to swap private data member of two classes.
// [The classes have no relation with each other].

#include <iostream>
using namespace std;
class B;
class A
{
public:
int x = 10;
friend class B;
};
class B
{
public :
int y=20;
friend class A;
void swapp(A &ob)
{
ob.x = ob.x+y;
y=ob.x-y;
ob.x=ob.x-y;
}
};
int main()
{
A ob1;
B ob;
cout << ob1.x << " " << ob.y << endl;
ob.swapp(ob1);
cout << ob1.x << " " << ob.y << endl;
return 0;
}