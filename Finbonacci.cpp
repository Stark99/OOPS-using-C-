#include<iostream>

using namespace std;

int main()
{
    int a=0,b=1,c,d;
    cout<<"Enter upto terms:"<<endl;
    cin>>d;

    cout<<a<<endl;
    cout<<b<<endl;
    c=a+b;

    while(c<=d)
    {
        {
        cout<<c<<endl;
        a=b;
        b=c;
        c=a+b;
        }
        cout<<"Non-Fibonacci Terms found:";
    for(int i=b+1;i<c;i++)
    {
        cout<<i<<endl;
    }

    }



    return 0;
}
