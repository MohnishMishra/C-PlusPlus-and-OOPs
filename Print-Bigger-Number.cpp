#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter two numbers : ";
cin >> a >> b;
int n = 0;
while(a>0 || b>0)
{
--a;
--b;
n += 1;
}
cout << n << " is greater. " << endl;
}