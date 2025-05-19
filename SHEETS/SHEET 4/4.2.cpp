#include<iostream>
using namespace std;
/*
2. Write a program in C++ to find the Greatest Common Divisor (GCD) of a number.
Sample Output:
Input a number: 15
The Greatest Common Divisor is: 5
*/

int main(){
int num, gcd;
cout<<"Please Enter number of 2 or three digit\n";
cin>>num;
for(int i=2; i<=num/2; i++)
    if (num % i == 0){
        gcd = i;
    }
cout<<"The Greatest Common Divisor is : "<<gcd<<endl;

return 0;
};

