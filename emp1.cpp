#include<iostream>

using namespace std;

class employee
{
    string name;
    long emp_no;

public:
    void getData();
    void showData();
};

void employee::getData()
{
    cout<<"Enter Employee Name:";
    cin>>name;

    cout<<"Enter Employee Number:";
    cin>>emp_no;
}

void employee::showData()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Employee Code:"<<emp_no;
}

int main()
{
    employee e[100];
    int n;
    cout<<"Enter no. of records to be saved:"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        e[i].getData();
    }

    for(int i=0;i<n;i++)
    {
        e[i].showData();
    }
}
