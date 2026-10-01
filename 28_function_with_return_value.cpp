#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;

}
int main()
{
    int x,y,result;
    cout<<"Enter first number:";
    cin>>x;
    cout<<"Enter second number:";
    cin>>y;
    result=add(x,y);
    cout<<"Sum="<<result<<endl;
    return 0;
}