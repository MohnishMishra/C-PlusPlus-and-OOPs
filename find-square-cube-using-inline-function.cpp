// WAP to find square and cube of a number using inline functions.

#include<iostream>
using namespace std;
inline int square(int n)
{
return (n*n);
}

inline int cube(int n)
{
return (n*n*n);
}

int main()
{
cout<<square(3)<<endl;
cout<<cube(3)<<endl;
return 0;
}