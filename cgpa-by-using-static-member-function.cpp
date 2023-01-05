// WAP to display to enter student roll,name,mark and display their
// cgpa by using static member function.

#include<iostream>
using namespace std;
class student
{
static int roll;
static char name[30];
static float marks[3];
static float cgpa;
static float sum;
public:
void getdata()
{cout<<"Enter the name: ";
cin>>name;
cout<<"Enter the roll: ";
cin>>roll;
cout<<"Enter the marks: ";
for (int i=0;i<3;i++)
{cin>>marks[i];
}} static void display()
{for (int i=0;i<3;i++)
{ sum=sum+marks[i];
}cgpa=(sum/3)/9.5;
cout<<"Name: "<<name<<endl;
cout<<"Roll: "<<roll<<endl;
cout<<"Cgpa: "<<cgpa<<endl;
}
};
int student::roll;
char student::name[30];
float student::marks[3];
float student::cgpa;
float student::sum;
int main()
{
student ob;
ob.getdata();
student::display();
return 0;
}