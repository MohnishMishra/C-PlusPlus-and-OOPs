// WAP in c++ to design a class employee having data member empid, ename, basic, TA, DA
// use read() function to read the data from terminal
// use show() to display the data into the terminal
// use calc() to calculate TA 30% of basic DA 70% of basic

#include<iostream>
#include<string>
using namespace std;
class Student
{
int empid;
string name;
int basic;
float ta,da;
public:
void read();
void show();
void calc();
};
void Student::read()
{
cout<<"Enter The Employee Id\n";
cin>>empid;
cout<<"Enter Name \n";
cin>>name;
cout<<"Enter Basic Salary\n";
cin>>basic;
}
void Student::show()
{
cout<<"Name: "<<name;
cout<<"\tEmp Id: "<<empid<<endl;
cout<<"Basic Salary: "<<basic<<endl;
cout<<"TA: "<<ta;
cout<<"\tDA: "<<da<<endl;
}
void Student::calc()
{
ta = 0.3*basic;
da=0.7*basic;
}
int main()
{
Student obj;
obj.read();
obj.calc();
obj.show();
return 0;
}