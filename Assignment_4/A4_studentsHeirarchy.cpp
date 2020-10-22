/*
                   -------------------------Student(Base Class)-------------------------
                                                    |
                                                    |
                    ----------------------------------------------------------------------
                    |                                                                    |
                    |                                                                    |
                (Derived Class)                                                   (Derided Class)
                 UnderGraduate                                                      PostGraduate
                      |                                                                  |
                      |                                                                  |
            ------------------------------------                             ---------------------
            |                  |               |                             |                   |
            |                  |               |                             |                   |
        (Derived Class)   (Derived Class)  (Derived Class)            (Derived Class)      (Derived Class)
            Junior           Senior          Freshman                 DoctoralStudent       MasterStudent
This is the example of Multilevel Hierarchy.
This hierarchy contains many inheritance relationships. An UndergraduateStudent is a
Student. A GraduateStudent is a Student, too. Each of the classes Freshman, Junior
and Senior is an UndergraduateStudent and is a Student. Each of the classes DoctoralStudent and
MastersStudent is a GraduateStudent and is a Student.
*/
#include <iostream>
using namespace std;
class Student{
public:
    Student(){
        cout<<"Constructor of Student class "<<endl;
    }
    void print(){
        cout<<"Function of ""Student"" class\n\n"<<endl;
    }
};
class UndergraduateStudent:public Student{
public:
    UndergraduateStudent(){
        cout<<"""Undergraduate"" Class Derived from Student Class"<<endl;
    }
};
class junior:public UndergraduateStudent{
public:
    void display(){
        cout<<"""Junior"" Class Derived From UnderGraduate Class"<<endl;
    }
};
class senior:public UndergraduateStudent{
public:
    void display(){
        cout<<"""Senior"" Class Derived from Undergraduate Class\n"<<endl;
    }
};
class freshman:public UndergraduateStudent{
public:
    void display(){
        cout<<"""Freshman"" Class Derived from Undergraduate Class\n"<<endl;
    }
};
class Postgraduate:public Student{
public:
    Postgraduate(){
        cout<<"""Postgraduate"" Class Derived from Student class"<<endl;
    }
};
class DoctoralStudent:public Postgraduate{
public:
    void display(){
        cout<<"""DoctoralStudent"" Class Derived From Postgraduate Class " << endl;
    }
};
class MastersStudent:public Postgraduate{
public:
    void display(){
        cout<<"""MasterStudent"" Class Derived From Postgraduate Class " << endl;
    }
};
int main(){
    UndergraduateStudent U1;
    U1.print();
    junior j1;
    j1.display();
    j1.print();
    senior s1;
    s1.display();
    freshman f1;
    f1.display();
    Postgraduate P1;
    P1.print();
    DoctoralStudent d1;
    d1.display();
    d1.print();
    MastersStudent m1;
    m1.display();
    m1.print();
    return 0;
}
