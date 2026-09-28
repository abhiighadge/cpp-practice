//least common multiple of two numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,lcm;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    lcm=(a>b)?a:b;
    while(true)
    {
        if(lcm%a==0 && lcm%b==0)
        {
            break;
        }
        lcm++;
    }
    cout<<"LCM="<<lcm<<endl;
    return 0;
}