// WAP in c++ to design a class Employee having data member
// empid,ename,basic,TA,DA and Gross.Create a static data member
// bonus shared by all employees.
// Use read() member function to read data.
// Use show() member function to display data.
// Use calc() member function to calculate TA=30%of basic and
// DA=0%of basic and Gross salary.Read data for n employees.

#include<iostream>
using namespace std;
class Employee
{
int empid;
char ename[30];
float basic;
float TA;
float DA;
float gross;
static float bonus;
public:
void read()
{cout<<"Enter id: ";
cin>>empid;
cout<<"Enter name: ";
cin>>ename;
cout<<"Enter basic: ";
cin>>basic;
cout<<"Enter bonus: ";
cin>>bonus;
}
void show()
{cout<<"Name :"<<ename<<endl;
cout<<"Id :"<<empid<<endl;
cout<<"Basic :"<<basic<<endl;
cout<<"TA :"<<TA<<endl;
cout<<"DA :"<<DA<<endl;
cout<<"Bonus :"<<bonus<<endl;
cout<<"Gross :"<<gross<<endl;
}
void calc()
{
TA=30*basic*0.01;
DA=70*basic*0.01;
gross=TA+DA+basic+bonus;
}
};
float Employee::bonus;
int main()
{
int n;
cin>>n;
Employee e[n];
for (int i=0;i<n;i++)
{e[i].read();
}for (int i=0;i<n;i++)
{e[i].calc();
e[i].show();
}
return 0;
}