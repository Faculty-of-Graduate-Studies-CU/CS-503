#include<iostream>
using namespace std;
/*
1. Write a C++ Program to find factorial of a number.
Note: Factorial on n = 1*2*3*...*n
Sample output
Enter a positive integer: 5
Factorial of 5= 120
*/
int factorial(int x);
int main(){
int number;
cout<<"Please Enter Any Positive Number\n";
cin>>number;
cout<<factorial(number);

return 0;
};
int factorial(int x){
int i, f = 1;
for(i =1; i<=x; ++i)
    f = f*i;
    return f;
//as long as this is f
//it will give me function of 5*4*3*2*1
};

