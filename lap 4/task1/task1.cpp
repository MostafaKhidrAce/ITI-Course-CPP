#include<iostream>
using namespace std;




int main()
{
    int Col , Row;
    int Grades[4][3];
    int Total = 0 ;
    float Avg = 0 ;

    for(Row=0;Row<4;Row++)
    {
        for(Col=0;Col<3;Col++)
        {
          cout<<"Please Enter Student : " << Row+1<< " Grade For Subjects : " << Col+1<<endl;
          cin>>Grades[Row][Col];
          cout<<"_______________________________________________________________"<<endl;
        }
    }
     for(Row=0;Row<4;Row++)
    {
        for(Col=0;Col<3;Col++)
        {
          Total += Grades[Row][Col];
        }
        cout << "The Total Grades Of Student "<< Row +1 <<" : " << Total << endl;
        Total = 0;
         cout<<"____________________________"<<endl;
    }
    for(Col=0;Col<3;Col++)
    {
        for(Row=0;Row<4;Row++)
        {
          Avg += Grades[Row][Col];
        }
        cout << "The Average Grades Of Subject "<< Col +1 <<" : " << Avg / 4 << endl;
        Avg = 0;
        cout<<"____________________________"<<endl;
    }


    return 0;
}


//Grades[Row][Col]
