#include <iostream>
using namespace std;

int ADD(int X,int Y);

int SUBTRUCT(int X,int Y);

int MULTIPLY(int X,int Y);

float DIVIDE(float X,float Y);


int main()
{
  int User,Num2,Num1;
  float Count = 0;
  do
  {
    cout << "1 - ADD" << endl;
    cout << "2 - SUBTRUCT" << endl;
    cout << "3 - MULTIPLY" << endl;
    cout << "4 - DIVIDE" << endl;
    cout << "5 - EXIT" << endl;
    cout << "##############" << endl;
    cin >> User ;
    cout << "_______________________________________________________" << endl;
    if (User < 5 && User > 0) {
    cout << "Please Enter The First Number " << endl;
    cin >> Num1;
    cout << "**************" << endl;
    cout << "Please Enter The Second Number " << endl;
    cin >> Num2;
    cout << "**************" << endl;
    }
    switch(User)
    {
        case 1:
        Count = ADD(Num1 , Num2);
        cout << "the result is : " << Count << endl ;
        cout << "_______________________________________________________" << endl;
        break;
        case 2:
        Count =  SUBTRUCT(Num1 , Num2);
        cout << "the result is : " << Count << endl ;
        cout << "_______________________________________________________" << endl;
        break;
        case 3:
        Count =  MULTIPLY(Num1 , Num2);
        cout << "the result is : " << Count << endl ;
        cout << "_______________________________________________________" << endl;
        break;
        case 4:
        Count = DIVIDE(Num1 , Num2);
        cout << "the result is : " << Count << endl ;
        cout << "_______________________________________________________" << endl;
        break;
    }

  } while(User != 5);


  return 0;
}

 int ADD(int X,int Y)
 {
     int Z;
     Z = X + Y ;
     return Z;
 }
int SUBTRUCT(int X,int Y)
 {
     int Z;
      Z = X - Y ;
     return Z;
 }
int MULTIPLY(int X,int Y)
 {
     int Z;
      Z = X * Y ;
     return Z;
 }
float DIVIDE(float X,float Y)
 {
     float Z;
      Z = X / Y ;
     return Z;
 }
