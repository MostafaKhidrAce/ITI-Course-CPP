#include<iostream>
#include<string.h>
using namespace std;


int main ()
{
  char Fword[16];
  char Lword[16];

  cout <<"please enter first word"<< endl;
  cin>>Fword;
  cout <<"please enter second word"<< endl;
  cin>>Lword;

  if(strcmp(Fword,Lword) == 0 )
  {
    cout <<"The words are identical"<< endl;
  }
  else
  {
    cout <<"The words are different"<< endl;
  }

  return 0;
}
