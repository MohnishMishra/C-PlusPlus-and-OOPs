#include<iostream>
using namespace std;
int main(){
cout<<"Enter two numbers whose GCD you want to find (Greater First NO.):"<<endl;//m must be greater then n
int m,n;
cin>>m>>n;
while(m%n!=0){
    int nextm= n;
    int nextn = m%n;
    m=nextm;
    n = nextn;
}
cout<<"GCD is : "<<n;
}