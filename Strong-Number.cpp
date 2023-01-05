#include<iostream>
using namespace std;
int fact(int n)
{
int x = 1;
for(int i=1;i<=n;i++)
x = x*i;
return x;
}
int strong(int n)
{
int t,r,ans=0;
t = n;
while(t)
{
r = t%10;
ans = ans + fact(r);
t = t/10;
}if(ans == n)
return 1;
else
return 0;
}
int main()
{
cout << "Strong numbers between 1 and 1000 are "<<endl;
for(int i=1;i<1001;i++)
{
if(strong(i))
cout <<i<<endl;
}
return 0;
}