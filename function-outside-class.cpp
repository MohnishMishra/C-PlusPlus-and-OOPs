// WAP to design a class student having data member roll, sname and mark. Use two functions input() and output() 
// to perform the i/o operations. The member functions should be decalared outside the function. 

#include<iostream>
#include<string>
using namespace std;
class Student
{
int roll;
string name;
int mark;
public:
void input();
void display();
};
void Student::input()
{
cout<<"Enter The Roll No.\n";
cin>>roll;
cout<<"Enter Name \n";
cin>>name;
cout<<"Enter marks in one subject\n";
cin>>mark;
}
void Student::display()
{
cout<<"Name: "<<name<<endl;
cout<<"Roll No.: "<<roll;
cout<<"\tMarks: "<<mark<<endl;
}
int main()
{
Student obj;
obj.input();
obj.display();
return 0;
}