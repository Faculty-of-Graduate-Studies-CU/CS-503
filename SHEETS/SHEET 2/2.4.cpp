#include<iostream>
using namespace std;
/*
when we will divide 6 on 2 it will give 3 
and when we will divide 3 on 3 it will give 1
*/
int main(){
 int num = 6;
 if (num % 2 == 0) {
 if (num % 3 == 0)
 cout << "Divisible by 2 and 3";
 else
 cout << "Divisible by 2 only";
} else {
 cout << "Not divisible by 2";
 }
//dividable by 2
//dividalbe by 3
// answer is c divisable by 2 and 3 ;
  
return 0;
};

