#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3,total;
    float percentage;
    cout<<"Enter marks of three subjects:";
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    percentage=total/3.0;
    cout<<"Total marks:"<<total<<endl;
    cout<<"Percentage:"<<percentage<<"%"<<endl;
    if(m1>=35 && m2>=35 &&m3>=35)
    {
        cout<<"Result: Pass"<<endl;
    }
    else
    {
        cout<<"Result: Fail"<<endl;
    }
    return 0;

}