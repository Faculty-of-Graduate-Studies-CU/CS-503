#include<iostream>
using namespace std;
/*
 2. Write a C++ program that takes an integer input representing a day of the
 week (1 for Monday, 2 for Tuesday, etc.) and prints the corresponding day's
 name using a switch statement. If the input is outside the range of 1 to 7, print
 "Invalid input."
*/

int main(){
int inp;
string day;
cout<<"Please input number for the day you wish to represent"<<endl;
cin>>inp;
switch(inp){
case 1 :
    cout<<"Today Is Monday\n";
case 2 :
    cout<<"Today is Tuesday\n";
case 3 :
    cout<<"Today is Tuesday\n";
case 4 :
    cout<<"Today is Tuesday\n";
case 5 :
    cout<<"Today is Tuesday\n";
case 6 :
    cout<<"Today is Tuesday\n";
case 7 :
    cout<<"Today is Tuesday\n";
default :
    cout<<"You enter invalid number\n";
};
//notice we didnt need to use break sentence
return 0;
};

