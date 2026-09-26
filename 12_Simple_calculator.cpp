#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    cout<<"Enter operators (+,-,*,/):";
    cin>>op;
    switch(op)
    {
        case '+':
            cout<<"Result="<<a+b<<endl;
            break;
            case'-':
            cout<<"Result="<<a-b<<endl;
            break;
            case'*':
            cout<<"Result="<<a*b<<endl;
            break;
            case'/':
            if(b!=0)
            {
            cout<<"Result="<<(float)a/b<<endl;
    }
            else
            {
            cout<<"Cannot divide by zero"<<endl;
    }
            break;
            default:
            cout<<"Invalid operator."<<endl;
    }
    return 0;
}