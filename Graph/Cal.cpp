#include<bits/stdc++.h>
using namespace std;


int main(){

    cout<<"\n\n\n\t\t\t\t Simple Calculator\n\n";

    int num1, num2;
    cout<<"Enter 1st number\n";
    cin>>num1;

    cout<<"Enter 2nd number\n";
    cin>>num2;

    cout<<"\n\n";

    cout<<"Press + for Addition\n";
    cout<<"Press - for Subtraction\n";
    cout<<"Press * for Multiplication\n";
    cout<<"Press / for Division\n";
    cout<<"Enter your choice\n";
    char input;
    cin>>input;

    switch(input){
        case '+':
            cout<<num1+num2;
            break;

        case '-':
            cout<<num1-num2;
            break;

        case '*':
            cout<<num1*num2;
            break;

        case '/':
            cout<<num1/num2;
            break;

        default:
            cout<<"Invalid Choice\n\n";
    }

    return 0;
}