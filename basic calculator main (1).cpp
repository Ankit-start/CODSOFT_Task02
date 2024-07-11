#include <iostream>
using namespace std;
//TASK 02
//BASIC CALCULATOR
//TO PERFORM ALL ARITHMETIC OPERATIONS
int main() {

  
  int a,b ;
  
  cout<<"CALCULATOR(+, -, * , / )"<<endl;
  
  cout<<"Enter no1: ";
  cin>>a;

  cout<<"Enter no2: ";
  cin>>b;

  char oper ;
  cout<<"Enter the operator: ";

  cin>>oper;

  switch(oper){ 
    
    case '+' : { cout<<a<<"+"<<b<<"="<<a+b;
                break;
               }
    case '-': { cout<<a<<"-"<<b<<"="<<a-b;
               break;
              }
    
    case '*': { cout<<a<<"*"<<b<<"="<<a*b;
                break;
              }
    
    case '/': { cout<<a<<"/"<<b<<"="<<(float)a/b;
              break;
              }


    default : cout<< "Enter valid operator ";
    
  }

  return 0;
}