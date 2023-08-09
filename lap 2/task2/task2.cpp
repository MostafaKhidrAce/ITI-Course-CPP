#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int A,B,C;
    float X1,X2;

    cout<<"Enter the value of A" << endl;
    cin>>A;
    cout<<";Enter the value of B" << endl;
    cin>>B;
    cout<<";Enter the value of C" << endl;
    cin>>C;

    int Der = pow(B,2)-4*A*C ;

    if(Der == 0)
    {
            X2 = -B / (2*A) ;
        cout << "X1 , X2 = " << X2 << endl;
    }
    if(Der > 0)
    {
        X1 = (-B - sqrt(Der)) / 2*A;
        X2 = (-B + sqrt(Der)) / 2*A;
        cout << "X1 = " << X1<< endl;
        cout << "X2 = " << X2<< endl;
    }
    if(Der < 0)
    {
        X1 = (-B / (2 * A));
        X2 =(sqrt(-1*Der)) / 2*A ;
        cout << "Real = " << X1<< endl;
        cout << "Imag = " << X2<< endl;
    }
}
