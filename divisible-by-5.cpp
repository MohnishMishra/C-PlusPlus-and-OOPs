// Check if divisible by 5 or not without using % operator

#include<iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter n : ";
cin >> n;
int a=n;
while(a>0)
{
a=a-5;
}if(a==0)
cout << n << " is divisible by 5"<< endl;
else
cout << n << " is NOT divisible by 5"<< endl;
}