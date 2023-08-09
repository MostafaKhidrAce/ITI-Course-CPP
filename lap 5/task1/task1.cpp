#include<iostream>
using namespace std;




int main()
{
   int Size;
   int Sum = 0 ;

   cout << "please enter how many number do you have" << endl;
   cin>>Size;
   cout<<"_________________"<<endl;

   int * ar;
   ar = new int [Size];
   if(ar)
   {
       for(int i=0;i<Size;i++)
       {
           cout<<"please enter number "<<i+1<<" = "<<endl;
           cin>>ar[i];


       }
        for(int i=0;i<Size;i++)
       {
           Sum += ar[i];
       }

    cout<<"_________________"<<endl;
    cout<<"the total is = "<< Sum ;

      delete(ar);

   }


    return 0;
}
