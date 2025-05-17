#include<iostream>
using namespace std;
/*
 2. Write a program that ask the user to enter the item number and prints the price of this
 item according to the following :
 No 1price 100,
 NO2price 200,
 No 3price 300,
 No 4price 400
*/
int main(){
//i want 4 conditions each one with specific result
int no;
int price;
cout<<"Please Enter Item Number : "<<endl;
cin>>no;
while(no==1){
    cout<<"The Price of first item is 100"<<endl;
    break;
};
while(no==2){
    cout<<"The Price of second item is 200"<<endl;
    break;
};
while(no==3){
    cout<<"The Price of second item is 300"<<endl;
    break;
};
while(no==4){
    cout<<"The Price of second item is 400"<<endl;
    break;
};
//you need to add break; 
//else the programme will run for ever



// you need to notice that = is assignment operator
// while you have to be == which equality operator
//the first give static value while the last give actual value
//try onetime with =andanother time with ==
return 0;
};

