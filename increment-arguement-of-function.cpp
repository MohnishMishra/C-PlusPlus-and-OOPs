// WAP to increment the value of an argument given to function.


#include<iostream>
using namespace std;
int main()
{
void inc(int);
int n;
cin>>n;
inc(n);
return 0;
}
void inc(int a)
{
a=a+1;
cout<<a<<endl;
}