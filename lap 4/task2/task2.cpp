#include<iostream>
#include<string.h>
using namespace std;


int main ()
{
    char Fname[16];
    char Lname[16];
    char Fullname[33];

    cout<<"Please enter your first name : "<<endl;
    cin>>Fname;
    cout<<"Please enter your last name : "<<endl;
    cin>>Lname;

    strcpy(Fullname,Fname);
    strcat(Fullname," ");
    strcat(Fullname,Lname);

    cout<<"The full name is : " << Fullname ;

    return 0;
}
