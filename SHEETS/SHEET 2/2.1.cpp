#include<iostream>
using namespace std;
/*
1. Write a program to check if a person is eligible to vote.Aperson is eligible to vote if
 their age is 18 or older. Additionally, check if the age is above 60, and print that the
 person is a senior citizen eligible to vote.
*/
int main(){
//the condition if the citizen is 18 or older
int age;
cout<<"What is your age ? "<<endl;
cin>>age;
if (age > 18){
    cout<<"You are eligible to vote "<<endl;
    cout<<"You are senior citizen"<<endl;
}else{
   cout<<"you don`t reach the final age";
};
return 0;
};

