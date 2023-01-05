// WAP to find simple interest by using static data member and
// member function

#include<iostream>
using namespace std;
class simple
{
static float p;
static int r;
static int y;
public:
void getdata()
{cin>>p>>r>>y;
}
static void calculate()
{float SI;
SI=p*r*y*0.01;
cout<<SI;
}
};
float simple::p;
int simple::r;
int simple::y;
int main()
{
simple ob;
ob.getdata();
simple::calculate();
return 0;
}