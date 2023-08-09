#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char Word[20];
    char Rword[20];

    cout << "please enter a word " << endl;
    cin>>Word;

    int Li =  strlen(Word) - 1;
    int i ;
    for(int i =0;i<strlen(Word);i++)
    {
        Rword[i] = Word[Li] ;
        Li--;
    }

    Rword[strlen(Word)] = '\0' ;

    cout << Rword;

    return 0;
}
