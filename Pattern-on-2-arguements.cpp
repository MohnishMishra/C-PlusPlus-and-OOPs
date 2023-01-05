// WAP to implement a function pattern() which recieve two arguements. The first arguement is a char which specifies 
// the character to print and second arguement is the n which specify number of time char will be printed. 
// If the second arguement is missing the function will always print the character 20 times. 
// If both the arguement is given the function will print n times. 

#include<iostream>
using namespace std;
void pattern(char c,int n=20)
{
for(int i=0;i<n;i++)
{
cout<<c<<"\t";
}
cout<<endl;
}
int main()
{
int n;char c;
cout<<"Enter the character and no. of times\n";
cin>>c>>n;
pattern(c,n);
pattern(c);
}