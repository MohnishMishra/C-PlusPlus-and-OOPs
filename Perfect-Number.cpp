#include<iostream>
using namespace std;
int main()
{
int sum;
cout<<"Perfect numbers between 1 to 1000 are : ";
for(int i=1;i<=1000;i++)
{
sum=0;
for(int j=1;j<=(i/2);j++)
{
if(i%j == 0)
{
sum+=j;
}
}
if(sum==i) {
cout << i << endl;
}
}
}