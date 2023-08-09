#include<iostream>
using namespace std;

int PrintPower(int x,int y);

int main ()
{
    int Base , Power , Res;
    cout<<"Please Enter the Base" << endl ;
    cin>>Base;
    cout<<"______________________" << endl ;
    cout<<"Please Enter the Power" << endl ;
    cin>>Power;
    cout<<"______________________" << endl ;

     Res = PrintPower(Base,Power);

    cout<<"The Result Is : " << Res <<endl ;
    cout<<"______________________" << endl ;

    return 0 ;
}

int PrintPower(int x,int y)
{
  if (y == 0)
  {
     return 1;
  }

  return (x*PrintPower(x, y-1));

}

