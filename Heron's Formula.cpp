#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a,b,c;
float fr,s;

cout<<"Enter the values of a,b,c: "<<endl;
cin>>a>>b>>c;


s=(((a+b+c)/20)*10);

fr=sqrt(s*(s-a)*(s-b)*(s-c));

cout<<"Area:"<<fr<<endl;

return 0;
}

