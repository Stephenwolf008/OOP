/*Inheritance allows developers to create subclasses that reuse code declared already in
a superclass. Avoiding the duplication of common functionality between several
classes by building a class inheritance hierarchy can save developers a considerable
amount of time. Similarly, placing common functionality in a single superclass,
rather than duplicating the code in multiple unrelated classes,
helps prevent the same errors from appearing in multiple source-code files.
If errors occur in the common functionality of the superclass,
the software developer needs to modify only the superclass. */
#include<iostream>
using namespace std;
class person{
public:
    person(){
    cout<<"This is a person\n";
    }
};
class Student:public person{
public:
    Student(){
    cout<<"This is also a student\n";
    }
};
class Teacher:public person{
public:
    Teacher(){
    cout<<"This is also a teacher\n";
    }
};
int main(){
Student S1;
Teacher T1;
return 0;
}










