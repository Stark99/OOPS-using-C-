#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b;
    float dist;
    cout<<"Enter 'x' distance covered in east"<<endl;
    cin>>a;
    cout<<endl;
    cout<<"Enter 'y' distance covered in south"<<endl;
    cin>>b;

    dist=sqrt((a*a)+(b*b));

    cout<<"Distance from point A-B: "<<dist;

    return 0;
}
