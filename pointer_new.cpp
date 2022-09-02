#include<iostream>
using namespace std;
int main(){
 int a = 5;
 int *b = &a;
 cout<<"the value of a is "<<*b<<endl;


 // new operrator

 int*c = new int (50);
 cout<<"the value at adress c is "<<*c<<endl;
 
 /*int *arr = new int[3];
 arr[0]= 2;           //creating array dynamically
 arr[1]= 9;
 arr[2]= 8;
  cout<<"the value at adress arr[0] is "<<arr[0]<<endl;*/


   // delete operrator

  int *arr = new int[3];
 arr[0]= 2;           
 *(arr+1) = 9;   // we can give value like this also
 arr[2]= 8;
 delete[] arr;       // delete operator just free the dynamic allocated memmory
  
  cout<<"the value at adress arr[0] is "<<arr[0]<<endl;
  cout<<"the value at adress arr[1] is "<<arr[1]<<endl;
  cout<<"the value at adress arr[2] is "<<arr[2]<<endl;

  


  return 0;





}
