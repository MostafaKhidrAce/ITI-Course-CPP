#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    int id;
    char name[30];

    public:

    void setId(int x)
    {
        id = x ;
    }
    void setName(char x [30])
    {
        strcpy(name,x);
    }
    int getId()
    {
        return id;
    }
    char* getName()
    {
        return name;
    }
};

int main()
{
    Student st1 ;
    Student st2 ;

    int st1id , st2id;
    char st1name [30] , st2name [30] ;

    cout<<"please enter id for Student number 1 : " << endl;
    cin>>st1id;
    cout<<"please enter id for Student number 2 : " << endl;
    cin>>st2id;

    cout<<"please enter name for Student number 1 : " << endl;
    cin>>st1name;
    cout<<"please enter name for Student number 2 : " << endl;
    cin>>st2name;

    st1.setId(st1id);
    st2.setId(st2id);
    st1.setName(st1name);
    st2.setName(st2name);

    st1id = st1.getId();
    st2id = st2.getId();

    strcpy(st1name,st1.getName());
    strcpy(st2name,st2.getName());

    cout << "Student 1 id is : "<<st1id<<" and the name is : "<<st1name<<endl;
    cout << "Student 2 id is : "<<st2id<<" and the name is : "<<st2name<<endl;

    return 0;
}
