#include<iostream>
#include<string.h>
using namespace std;

class shape
{
   protected:

   int dim1,dim2;

   public:

   shape()
   {
       dim1=dim2=0;
   }
   shape(int m)
   {
       dim1=dim2=m;
   }
   shape(int m , int n)
   {
       dim1=m;
       dim2=n;
   }
   void setD1(int m)
   {
     dim1 = m;
   }
   void setD2(int n)
   {
     dim2 = n;
   }
   int getD1(){return dim1;}
   int getD2(){return dim2;}
   virtual float area()=0;
};

class circle:public shape
{

   public:

   circle(){}

   circle(int r):shape(r){}

   float area()
   {
       return(3.14*dim1*dim2);
   }
};

class rectangle:public shape
{

   public:

   rectangle(){}

   rectangle(int l,int w):shape(l,w){}

   float area()
   {
       return(1.0*dim1*dim2);
   }
};

class triangle:public shape
{

   public:

   triangle(){}

   triangle(int b,int r):shape(b,r){}

   float area()
   {
       return(0.5*dim1*dim2);
   }
};

class square:public rectangle
{

   public:

   square(){}

   square(int s):rectangle(s,s){}

};

class geoshape
{
    shape*pone;
    shape*ptwo;
    shape*pthere;
    shape*pfour;

    public:

    geoshape(shape*p1,shape*p2,shape*p3,shape*p4)
    {
      pone=p1;
      ptwo=p2;
      pthere=p3;
      pfour=p4;
    }
    float totalArea()
    {
        float total;
        total = pone->area()+ptwo->area()+pthere->area()+pfour->area();
        return total;
    }
};

int main ()
{
    int cc,rr1,rr2,tt1,tt2,ss;

    cout<<"please enter the circle radius "<<endl;
    cin>>cc;
    cout<<"please enter the rectangle width and length "<<endl;
    cin>>rr1;
    cin>>rr2;
    cout<<"please enter the triangle base and height "<<endl;
    cin>>tt1;
    cin>>tt2;
    cout<<"please enter the square length "<<endl;
    cin>>ss;

    circle c(cc);
    rectangle r(rr1,rr2);
    triangle t(tt1,tt2);
    square s (ss);

    geoshape g (&c,&r,&t,&s);

    cout<<"the total of area is :"<<g.totalArea();

}
