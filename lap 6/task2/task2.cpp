#include<iostream>
#include<string.h>
using namespace std;

class Person
{
   protected:

   int id;
   char name[30];

   public:


    Person()
    {
        id=0;
        strcpy(name,"Unnamed Person");
    }
    Person(int x)
    {
        id=x;
        strcpy(name,"Unnamed Person");
    }
    Person(char y [30])
    {
        id=0;
        strcpy(name,y);
    }
    Person(int x , char y [30])
    {
        id=x;
        strcpy(name,y);
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
    int print()
    {
        return 3 ;
    }

};


class Employee:public Person
{
    int salary;

    public:

     Employee()
     {
        salary = 0;
     }
     Employee(int x, char y [30],int s):Person(x,y)
     {
        salary = s;
     }

     void setSalary(int s)
    {
        salary = s ;
    }
    int getSalary()
    {
        return salary;
    }
    int print()
    {
        return 5 ;
    }
};

class Customer:public Person
{
    char phone [20];

    public:

     Customer()
     {
        strcpy(phone,"not entered");
     }
     Customer(int x, char y [30],char p [20]):Person(x,y)
     {
        strcpy(phone,p);
     }

     void setPhone(char p [20])
    {
        strcpy(phone,p);
    }
    char* getPhone()
    {
        return phone;
    }
    int print()
    {
        return 10 ;
    }
};

int main()
{
    int emId , cuId , emSalary;
    char emName[30] , cuName[30] , cuPhone[30] ;

    cout << "please enter employee id : " <<endl;
    cin >> emId;
    cout << "please enter employee name : " <<endl;
    cin >> emName;
    cout << "please enter employee Salary : " <<endl;
    cin >> emSalary;

    cout << "please enter Customer id : " <<endl;
    cin >> cuId;
    cout << "please enter Customer name : " <<endl;
    cin >> cuName;
    cout << "please enter Customer phone : " <<endl;
    cin >> cuPhone;

    Employee Em1(emId,emName,emSalary);
    Customer Cu1(cuId,cuName,cuPhone) ;

    cout << "the employee id : "<<Em1.getId()<<" and the name is : " <<Em1.getName()<<" and the salary is : "<<Em1.getSalary()<<endl;
    cout << "the customer id : "<<Cu1.getId()<<" and the name is : " <<Cu1.getName()<<" and the phone is : "<<Cu1.getPhone()<<endl;

    cout << Em1.print() ;

    return 0 ;
}
