#include<iostream>
using namespace std;
void change(int a)
{
    a=100;
    cout<<"Inside function="<<a<<endl;

}
int main()
{
    int x;
    cout<<"Enter a number:";
    cin>>x;
    change(x);
    cout<<"Inside main:"<<x<<endl;
    return 0;
}