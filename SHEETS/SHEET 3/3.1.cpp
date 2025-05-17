#include<iostream>
using namespace std;
/*
1. Write a program (using switch case) that ask the user to enter the item number and prints the price of this item according to the following :
No 1 price 100,
NO 2 price 200,
No 3 price 300,
No 4 price 400
*/
int main(){
int no;
cout<<"Please Enter Item Number"<<endl;
cin>>no;
switch(no){
case 1:
cout<<"The Item Price iS 100"<<endl;
case 2:
cout<<"The Item Price iS 200"<<endl;
break;

case 3:
cout<<"The Item Price iS 300"<<endl;
break;

default:
cout<<"The Item Price iS 400"<<endl;
break;
};
};
//you will have not to determine the value or contain of it in no
//you will have to evaluate number of cases
//if you entered any number above 3 it will give you 400

