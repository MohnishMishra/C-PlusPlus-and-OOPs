// Create a class which stores name, roll number and total marks
// for a student. Input the data for a student and display it.

#include <iostream>
using namespace std;
class student
{
string name;
int roll;
int marks;
public:
void getdata()
{
cout<<"Enter Name: ";
cin>>name;
cout<<"Enter Roll Number: ";
cin>>roll;
cout<<"Enter Marks: ";
cin>>marks;
}
void display()
{
cout<<"========================="<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Roll Number: "<<roll<<endl;
cout<<"Marks: "<<marks<<endl;
}
};
int main()
{
student ob;
ob.getdata();
ob.display();
return 0;
}