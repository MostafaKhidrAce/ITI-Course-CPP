#include<iostream>
using namespace std;

int main ()
{
    int Size;

    cout << "Enter the size of the Magic Box" << endl;
    cin >> Size;

    int Row =1;
    int Col = (Size + 1 ) / 2 ;
    int Num;

    if(Size%2 == 1 && Size != 1)
    {
        for( Num=1 ; Num <= (Size*Size) ; Num++ )
        {
            if(Num > 1)
            {
                if((Num - 1)% Size != 0)
                {
                    Row --;
                    Col --;

                    if (Row < 1)
                    {
                        Row = Size;
                    }
                    if (Col < 1)
                    {
                        Col = Size;
                    }
                }
                else
                {
                    Row ++;

                 if (Row > Size)
                 {
                     Row = 1;
                 }

                }
            }
            cout << "Num = " << Num <<  endl;
            cout << "Row = " << Row <<  endl;
            cout << "Col = " << Col <<  endl;
            cout << "________________" <<  endl;
        }
    }
    else
    {
        cout << "The number must be an odd number and the number doesn't equal one";
    }

}
