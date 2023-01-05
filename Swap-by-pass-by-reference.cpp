// WAP to swap two integers using pass by reference.

#include<iostream>
using namespace std;
int main()
{
void swap(int &,int &);
int a,b;
cout<<"Enter the numbers:"<<endl;
cin>>a>>b;
swap(a,b);
return 0;
}
void swap(int &p,int &q)
{
int s;
s=p;
p=q;
q=s;
cout<<"a ="<<p<<endl<<"b ="<<q<<endl;
}