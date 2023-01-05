// WAP to enter id, name, age and basic salary of n number of employees. Calculate the
// gross salary of all the employees and display it along with all other details in a tabular
// form, using pointer to structure.
// [ Gross salary= Basic salary + DA + HRA,
// DA = 80% of Basic salary HRA=10% of
// Basic salary ]

#include <iostream>
using namespace std;
struct emp
{
int id;
string nam;
int age;
int sal;
float gross;
};
void display(struct emp *st,int l)
{
cout << "Details Entered : - " << endl;
for(int i=0;i<l;i++)
{
cout << "Employee number " << i+1 << "ID : " << st->id << " Name : " << st->nam << " Age : " <<
st->age << " Sal : " << st->sal << " Gross Sal : " << st->gross << endl;
st++;
}
}
int main()
{
int n;
cout << "Enter number of employees : ";
cin >> n;
struct emp a[n];
for(int i=0;i<n;i++)
{
cout << "Enter ID, name, age, basic sal of Employee " << i+1 << endl;
cin >> a[i].id >> a[i].nam >> a[i].age >> a[i].sal;
a[i].gross = 1.9*a[i].sal;
}
struct emp *s = a;
display(s,n);
}