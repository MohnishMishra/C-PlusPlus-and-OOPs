// WAP father class input the age, name. And son class also take the age and name. 
// If father age is less than son's age then print invalid age. Otherwise display father and son's age and name.

#include<iostream>
using namespace std;
class father
{
public :
int age;
string name;
father()
{
cout << "Enter Father's name and age : ";
cin >> name >> age;
}
};
class son : public father
{
public :
int age;
string name;
son()
{
cout << "Enter Son's name and age : ";
cin >> name >> age;
}
};
int main()
{
cout << "\nINPUT : \n" << endl;
son ob;
cout << "\n\nOUTPUT : \n" << endl;
if(ob.age >= ob.father :: age)
{
cout << "Invalid age entered..." << endl;
return 0;
}
cout << "Father's Name : " << ob.father :: name << endl;
cout << "Father's Age : " << ob.father :: age << endl;
cout << "Son's Name : " << ob.name << endl;
cout << "Son's Age : " << ob.age << endl;
return 0;
}
