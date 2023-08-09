#include <iostream>
using namespace std;

int main ()
{
   int Num[5];
   int Min , Max  , Avr ;

   for(int i=0 ;i<5;i++)
   {
     cout<<"please enter number "<< i+1<<endl;
     cin>> Num[i] ;
     Min = Num[0] ;
     Max = Num[0] ;

   if(Num[i] > Max )
   {
       Max = Num[i];
   }
   if(Num[i] < Min )
   {
       Min = Num[i];
   }
   Avr =  (Max + Min)/2;
   }


   cout << "the maximum number is : " << Max << endl;
   cout << "the minimum number is : " << Min << endl;
   cout << "the average number is : " << Avr << endl;


  return 0;
}


