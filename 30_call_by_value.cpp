#include<iostream>
using namespace std;
void update(int a, int b)
{
    a=a+10;
    b=b+10;
    cout<<"Inside function."<<endl;
    cout<<"Value of a="<<a<<endl;
    cout<<"Value of b="<<b<<endl;
}
int main()
{
    int x,y;
    cout<<"Enter first number:";
    cin>>x;
    cout<<"Enter second number:";
    cin>>y;
    update(x,y);
    cout<<"Inside main:"<<endl;
    cout<<"value of x:"<<x<<endl;
    cout<<"Value of y:"<<y<<endl;
    return 0;
}