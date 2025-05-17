#include<iostream>
using namespace std;
//1. Write a c ++ program to find the volume and surface area of sphere.
/*
Hint: PI=3.14
volume=4.0/3 *pi*r*r*r;
area=4*pi*r*r;
*/
int main(){
float PI = 3.14;
float r;
float Volume = 4/3 * PI * r * r * r ;
float area = 4 * PI * r * r ;
cout<<"What is the radius of the sphere ?"<<endl;
cin>> r;
cout<<"The Volume of the sphere is : "<<Volume<<endl;
cout<<"The Area of the sphere is : "<<area<<endl;
cout<<"Thanks for using our programme"<<endl;
return 0;
};
