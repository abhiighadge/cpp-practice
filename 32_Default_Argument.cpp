#include<iostream>
using namespace std;
void add(int a, int b=10)
{
    cout<<"Sum="<<a+b<<endl;
}
int main()
{
    int x;
    cout<<"Enter a number:";
    cin>>x;
    add(x);
    return 0;
}