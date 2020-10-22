/*
                                                               Shape(Base Class)                                                           |                                                                        |
                                                                      |
                                                                      |
                                     ------------------------------------------------------------------
                                     |                                                                |
                                     |                                                                |
                            (Derived Class)                                                      (Derived CLass)
                               TwoDShape                                                           ThreeDShape
                                     |                                                                  |
                                     |                                                                  |
                      ---------------------------                                            --------------------------
                      |                         |                                            |                        |
                      |                         |                                            |                        |
                (Derived Class)          (Derived Class)                             (Derived Class)          (Derived CLass)
                   Square                   Rectangle                                     Sphere                   Cuboid
*/
#include <iostream>
using namespace std;
class Shape{
public:
    Shape(){
        cout <<"Shape is the Base class"<< endl;
    }
};
class TwoDShape:public Shape{
public:
    float length, breadth;
    TwoDShape(){
        cout << "TwoDShape class Derived From Shape Class" << endl;
    }
};
class ThreeDShape:public Shape{
public:
    float radius, height, length, breadth;
    ThreeDShape(){
        cout << "ThreeDShape class Derived From Shape Class " << endl;
    }
};
class Square:public TwoDShape{
public:
    Square(){
        cout << "Square class Derived from TwoDShape Class" << endl;
    }
    float calculateArea(){
        cout << "Enter the side of Square " << endl;
        cin >> length;
        return length*length;
    }
};
class Rectangle : public TwoDShape{
public:
    Rectangle(){
        cout << "Rectangle class Derived From TwoDShape class" << endl;
    }
    float calculateArea(){
        cout << "Enter the length and breadth " << endl;
        cin >> length >> breadth;
        return length * breadth;
    }
};
class Sphere : public ThreeDShape{
public:
    Sphere(){
        cout << "Sphere class Derived From ThreeDShape class" << endl;
    }
    float calculateVolume(){
        cout << "Enter the radius of Sphere " << endl;
        cin >> radius;
        return 3.14 * 1.33 * radius * radius * radius;
    }
};
class Cuboid : public ThreeDShape{
public:
    Cuboid(){
        cout << "Cuboid class Derived From Class ThreeDshape" << endl;
    }
    float calculateVolume(){
        cout << "Enter the length,Breadth,Height of Cuboid " << endl;
        cin >> length >> breadth >> height;
        return length * breadth * height;
    }
};
int main(){
    float area, volume;
    Square S;
    area = S.calculateArea();
    cout << "The Area of Square is : " << area << endl;
    cout<<"\n\n";
    Rectangle R;
    area = R.calculateArea();
    cout << "The Area of Rectangle is : " << area << endl;
    cout<<"\n\n";
    Sphere sp;
    volume = sp.calculateVolume();
    cout << "The volume of Sphere is : " << volume << endl;
    cout<<"\n\n";
    Cuboid C;
    volume = C.calculateVolume();
    cout << "The Volume of Cuboid is : " << volume << endl;
}
