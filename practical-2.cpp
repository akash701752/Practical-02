/*
Akash Yadav
200111076
Setion - A
Program to Check for Prime number LAB Practical 2 
*/
#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
int num , count =0 ;
cout<< "Enter a Number to check : ";
cin>>num ;
cout<<endl;
int i ;
for(i=2;i<=sqrt(num);i++)
{
 if(num%i==0)
 {
  count =1 ;
 }
}
if(num<=1)
{
 count = 0 ;
}
if(count==0)
{
 cout<<"Number is Prime Number " << endl;
}
else
{
 cout<<"Number is NOT a Prime Number " << endl ;
}
return 0 ;
}
