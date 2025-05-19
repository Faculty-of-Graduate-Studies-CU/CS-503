#include<iostream>
using namespace std;
int factorial(int n);


int main(){
int num;
cout<<"Enter Positive Number"<<endl;
cin>>num;
if(num < 0){
    cout<<"factorial is not defined for negative number"<<endl;
}else{
    cout<<factorial(num)<<endl;
}
return 0;
};
int factorial(int n){
if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
};

