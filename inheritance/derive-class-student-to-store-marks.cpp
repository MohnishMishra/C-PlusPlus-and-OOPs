// Create a class student which stores name, roll number and age of the students. 
// Derive a class test from a student class, which stores the marks of the students in 5 subjects. 
// Input and display the details of the students 

#include<iostream>
using namespace std;
class student
{
protected:
char name[20];
int roll;
public:
void getdata()
{
cout << "Enter roll and name " << endl;
cin >> roll >> name;
}
};
class test : public student
{
protected:
int sub[5];
public:
void getmark()
{
cout << "Enter 5 subjects marks : " << endl;
cin >> sub[0] >> sub[1]>> sub[2]>> sub[3]>> sub[4];
}
void details()
{
cout << "\n\nName : " << name << " Roll number : " << roll << endl;
cout << "Marks in 5 subjects : " << sub[0] << ", " << sub[1] << ", " << sub[2] << ", " << sub[3] << ", "
<< sub[4] << endl;
}
};
int main()
{
test ob;
ob.getdata();
ob.getmark();
ob.details();
}