#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    char op;
    cout<<"Enter an operator(+,-,*,/): ";
    cin>>op;
    cout<<"Enter two Numbers = "<<endl;
    cin>>num1>>num2;
    switch (op)
    {
    case'+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
     case'-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;
     case'*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;
     case'/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;
    
    default:
    cout<<"error";
        break;
    }
    



}