// Create a class which stores id, name, age and basic salary of an
// employee. Input data for
// n number of employees. Calculate the gross salary of all the employees
// and display it
// along with all other details in a tabular form.
// [Gross salary= Basic salary + DA + HRA,
// DA = 80% of Basic salary HRA=10%
// of Basic salary ]


#include <iostream>
using namespace std;
class employee
{
string name;
int age;
int basic,DA,HRA;
double gross;
public:
void getdata()
{
cout<<"Enter Name: ";
cin>>name;
cout<<"Enter Age: ";
cin>>age;
cout<<"Enter Basic salary: ";
cin>>basic;
DA=0.8*basic;
HRA=0.1*basic;
gross=basic+DA+HRA;
}
void display()
{
cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;
cout<<"Basic salary = "<<basic<<endl;
cout<<"Gross salary = "<<gross<<endl;
}
};
int main()
{
int n=0;
cout<<"Enter number of employee: ";
cin>>n;
employee ob[n];
for(int i=0; i<n; i++)
{
cout<<"Enter Employee "<<i+1<<" details"<<endl;
ob[i].getdata();
}
cout<<"========================="<<endl;
for(int i=0; i<n; i++)
{
cout<<"Employee "<<i+1<<endl;
ob[i].display();
cout<<"------------------"<<endl;
}
return 0;
}

