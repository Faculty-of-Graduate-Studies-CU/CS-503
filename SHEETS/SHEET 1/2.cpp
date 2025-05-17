#include<iostream>
using namespace std;
//2. Write a program that calculate Kelvin and Fahrenheit from a Celsius degree entered by the user.
/*
k = c + 273
f = c * 5/9 + 3
*/
int main(){
float  c;
float k;
float f;
cout <<"Please enter the degree in Celesius "<<endl;
cin>>c;
k = c +273;
f = (c *9/5)+32;
cout <<"The degree in kelvin is : "<<k<<endl;
cout<<"The Degree in fahernheit is : "<<f <<endl;
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"\n";

cout<<"Thanks for using our programme"<<endl;
return 0;
};

