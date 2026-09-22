#include<iostream>
using namespace std;
int main()
{
    int n,original,digit,reverse=0;
    cout<<"Enter a integer:";
    cin>>n;
    original=n;
    while(n!=0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if(original==reverse)
    {
        cout<<original<<" is a palindrome number"<<endl;
    }
    else
    {
        cout<<original<<" is not a palindrome number"<<endl;
    }
    return 0;
}