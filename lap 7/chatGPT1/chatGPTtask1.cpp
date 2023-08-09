#include <iostream>
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
    shape* pone;
    shape* ptwo;
    shape* pthere;
    shape* pfour;

public:
    geoshape(shape* p1, shape* p2, shape* p3, shape* p4)
    {
        pone = p1;
        ptwo = p2;
        pthere = p3;
        pfour = p4;
    }

    float totalArea()
    {
        float total = pone->area() + ptwo->area() + pthere->area() + pfour->area();
        return total;
    }
};

int main()
{
    int numShapes;
    cout << "Please enter the number of shapes: ";
    cin >> numShapes;

    shape** shapes = new shape*[numShapes];

    int shapeType, r, l, w, b, h, s;

    for (int i = 0; i < numShapes; i++)
    {
        cout << "Shape " << i + 1 << ": " << endl;
        cout << "Enter the shape type (1: Circle, 2: Rectangle, 3: Triangle, 4: Square): ";
        cin >> shapeType;

        switch (shapeType)
        {
        case 1:
            cout << "Please enter the circle radius: ";
            cin >> r;
            shapes[i] = new circle(r);
            break;
        case 2:
            cout << "Please enter the rectangle width and length: ";
            cin >> l >> w;
            shapes[i] = new rectangle(l, w);
            break;
        case 3:
            cout << "Please enter the triangle base and height: ";
            cin >> b >> h;
            shapes[i] = new triangle(b, h);
            break;
        case 4:
            cout << "Please enter the square length: ";
            cin >> s;
            shapes[i] = new square(s);
            break;
        default:
            cout << "Invalid shape type. Skipping this shape." << endl;
            i--; // To handle the current iteration again
            break;
        }
    }

    // Calculate the total area
    float total = 0;
    for (int i = 0; i < numShapes; i++)
    {
        total += shapes[i]->area();
    }

    cout << "The total area is: " << total << endl;

    // Clean up allocated memory
    for (int i = 0; i < numShapes; i++)
    {
        delete shapes[i];
    }
    delete[] shapes;
}
