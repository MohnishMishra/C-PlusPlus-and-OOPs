// WAP to input name, roll number and marks in 5 subjects for a student, and
// display it.

#include <iostream>
using namespace std;
int main()
{
string name;
int roll;
int marks[5];
cout << "Enter Name then roll number and followed by 5 marks :-" << endl;
cin >> name >> roll;
for(int i=0;i<5;i++)
cin >> marks[i];
cout << "\n\nDetails Entered :- \n\nName : " << name << "\nRoll Number : " << roll << endl;
for(int i=0;i<5;i++)
cout << "Marks " << i+1 << " : " << marks[i] << endl;
return 0;
}
