/*
                 Quadrilateral(Base Class)
                            |
                            |
                  Trapezoid(Derived Class)
                            |
                            |
                Parallelogram(Derived Class)
                            |
                            |
                  Rectangle(Derived Class)
                            |
                            |
                   Square(Derived Class)
*/
#include <iostream>
using namespace std;
class Quadrilateral{
public:
    Quadrilateral(){
        cout<<"Quadrilateral is the base class"<<endl;
    }
};
class Trapezoid:public Quadrilateral{
public:
    int l2,l1,l3,l4,h;
    Trapezoid(){
        cout<<"Trapezoid class is derived from Quadrilateral class"<<endl;
    }
    float area(){
        cout<<"Enter the length of parallel sides of trapezoid:";
        cin>>l1>>l2;
        cout<<"Enter the height :";
        cin>>h;
        return float(0.5*(l1+l2)*h);
    }
    float perimeter(){
        cout<<"Enter the length of non parallel sides :"<<endl;
        cin>>l4>>l3;
        return l1+l2+l3+l4;
    }
};
class Parallelogram:public Trapezoid{
public:
    float  b, c, d,height,base;
    Parallelogram(){
        cout<<"Parallelogram class is derived from Trapezoid class"<<endl;
    }
    float area(){
        cout<<"Enter the base with corresponding height :"<<endl;
        cin >>base>>height;
        return base*height;
    }
    float perimeter(){
        cout<<"Enter the remaining sides"<<endl;
        cin>>b>>c>>d;
        return base+ b + c + d;
    }
};
class Rectangle:public Parallelogram{
public:
    float a, b;
    Rectangle(){
        cout<<"Rectangle class is derived from Parallelogram class " << endl;
    }
    float area(){
        cout<<"Enter the length and breadth of rectangle : "<< endl;
        cin>>a>>b;
        return a*b;
    }
    float perimeter(){
        return 2*(a + b);
    }
};
class Sqaure:public Rectangle{
public:
    float side;
    Sqaure(){
        cout << "Square class is derived from Rectangle class " << endl;
    }
    float area(){
        cout << "Enter the side of square : " << endl;
        cin >> side;
        return side*side;
    }
    float perimeter(){
        return 4*side;
    }
};
int main()
{
    int ch;
    float perimeter,area;
    cout<<"Enter the type of Quadrilateral you want to work on :" << endl;
    cout<<"1.Trapezoid \n2.Rectangle \n3.Square \n4.Parallelogram" << endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        {Trapezoid t;
        area= t.area();
        cout<<"The Area of Trapezoid is :"<<area<<endl;
        perimeter=t.perimeter();
        cout << "The perimeter of Trapezoid is : "<<perimeter<<endl;
        break;}
    case 2:
        {Rectangle r;
        area = r.area();
        cout << "the Area of Rectangle is : " << area << endl;
        perimeter = r.perimeter();
        cout << "the parameter of Rectangle is : " << perimeter << endl;
        break;}
    case 3:
        {Sqaure s;
        area = s.area();
        cout << "the area of Square is : " << area << endl;
        perimeter = s.perimeter();
        cout << "the parameter of Square is : " << perimeter << endl;
        break;}
    case 4:
        {Parallelogram P;
        area = P.area();
        cout << "Area of Parallelogram is : " << area << endl;
        perimeter = P.perimeter();
        cout << "Perimeter of Parallelogram is : " << perimeter  << endl;
        break;}
    default:
        cout<<"Invalid choice !"<<endl;
    }
    return 0;
}
