#include <iostream>
using namespace std;

int main ()
{
   int Num1,Num2,Num3,Num4,Num5;
   int Min, Max ;

   cout << "enter the 1st number"<<endl;
   cin >> Num1;
   cout << "enter the 2nd number"<<endl;
   cin >> Num2;
   cout << "enter the 3rd number"<<endl;
   cin >> Num3;
   cout << "enter the 4th number"<<endl;
   cin >> Num4;
   cout << "enter the 5th number"<<endl;
   cin >> Num5;

   if(Num1>=Num2&&Num1>=Num3&&Num1>=Num4&&Num1>=Num5)
   {
       Max = Num1;
   }
   else
   {
      if(Num2>=Num1&&Num2>=Num3&&Num2>=Num4&&Num2>=Num5)
      {
          Max = Num2;
      }
      else
      {
        if(Num3>=Num1&&Num3>=Num2&&Num3>=Num4&&Num3>=Num5)
      {
          Max = Num2;
      }
      else
      {
           if(Num3>=Num1&&Num3>=Num2&&Num3>=Num4&&Num3>=Num5)
      {
          Max = Num3;
      }
      else
      {
           if(Num4>=Num1&&Num4>=Num2&&Num4>=Num3&&Num4>=Num5)
      {
          Max = Num4;
      }
      else
      {
          if(Num5>=Num1&&Num5>=Num2&&Num5>=Num3&&Num5>=Num4)
      {
          Max = Num5;
      }
      }
      }
      }
      }
   }

    if(Num1<=Num2&&Num1<=Num3&&Num1<=Num4&&Num1<=Num5)
   {
       Min = Num1;
   }
   else
   {
      if(Num2<=Num1&&Num2<=Num3&&Num2<=Num4&&Num2<=Num5)
      {
          Min = Num2;
      }
      else
      {
        if(Num3<=Num1&&Num3<=Num2&&Num3<=Num4&&Num3<=Num5)
      {
          Min = Num2;
      }
      else
      {
           if(Num3<=Num1&&Num3<=Num2&&Num3<=Num4&&Num3<=Num5)
      {
          Min = Num3;
      }
      else
      {
           if(Num4<=Num1&&Num4<=Num2&&Num4<=Num3&&Num4<=Num5)
      {
          Min = Num4;
      }
      else
      {
          if(Num5<=Num1&&Num5<=Num2&&Num5<=Num3&&Num5<=Num4)
      {
          Min = Num5;
      }
      }
      }
      }
      }
   }

   cout << "the maximum number is : " << Max << endl;
   cout << "the minimum number is : " << Min << endl;

  return 0;
}
