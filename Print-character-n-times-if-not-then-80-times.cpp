// WAP which displays a given character,n no of times using a
// function.When the n value is not provided, it should print the
// given character 80 times.When both the character and n value is
// not provided, it should print’*’ character 80 times.

#include<iostream>
using namespace std;
void num(char c='*',int n=80)
{
while (n>0)
{
cout<<c;
n--;
}
cout<<endl;
}

int main()
{
num('A',6);
num('A');
num();
return 0;
}