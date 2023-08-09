#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    int id;
    char name[30];
    static int Count;

    public:

    Student()
    {
        id=0;
        strcpy(name,"Unnamed student");
        Count++;
    }
    Student(int x)
    {
        id=x;
        strcpy(name,"Unnamed student");
        Count++;
    }
    Student(char y [30])
    {
        id=0;
        strcpy(name,y);
        Count++;
    }
    Student(int x , char y [30])
    {
        id=x;
        strcpy(name,y);
        Count++;
    }


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
    static int getCount()
    {
        return Count;
    }
    ~Student()
    {
        Count--;
    }
};
int Student::Count;

int main()
{
    int st1id , st2id;
    char st1name [30] , st2name [30] ;

    cout<<"please enter id for Student number 1 : " << endl;
    cin>>st1id;
    cout<<"please enter name for Student number 1 : " << endl;
    cin>>st1name;

    cout<<"please enter id for Student number 2 : " << endl;
    cin>>st2id;
    cout<<"please enter name for Student number 2 : " << endl;
    cin>>st2name;

    Student st1 (st1id,st1name);
    Student st2 (st2id,st2name);




    /*
    st1.setId(st1id);
    st2.setId(st2id);
    st1.setName(st1name);
    st2.setName(st2name);
    */

    st1id = st1.getId();
    st2id = st2.getId();

    strcpy(st1name,st1.getName());
    strcpy(st2name,st2.getName());

    cout << "Student 1 id is : "<<st1id<<" and the name is : "<<st1name<<endl;
    cout << "Student 2 id is : "<<st2id<<" and the name is : "<<st2name<<endl;
    cout << "the count is : "<<Student::getCount()<<endl;

    return 0;
}
