#include <iostream>

using namespace std;

class Student
{
 char name[20];
 int roll;
 int marks;

 public:
  void input();
  void show();
};


 void Student::input()
 {
     cout<<"Enter name:";
     cin>>name;

     cout<<"Enter roll:";
     cin>>roll;

     cout<<"Enter marks:";
     cin>>marks;

 }

 void Student::show()//"::", scope resolution:- compiler wont decl it as global variable as SR assigns show() as Student function
 {
     cout<<endl;
     cout<<"Name:"<<name<<endl;

     cout<<"Roll:"<<roll<<endl;

     cout<<"Marks:"<<marks<<endl;
 }


int main()
{
 class Student s1;
 s1.input();
 s1.show();
    return 0;
}
