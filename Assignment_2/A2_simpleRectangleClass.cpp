#include<iostream>
using namespace std;
class Rectangle{
private:
    float length;
    float width;
public:
    void Area(){
    cout<<"Area="<<getLength()*getWidth()<<endl;
    }
    void Perimeter(){
    cout<<"Perimeter="<<2*(getLength()+getWidth())<<endl;
    }
    void setLength(float length){
        if(length>0.0 && length<20.0)
            this->length=length;
        else cout<<"Length is not in the given range.\n";
    }
    void setWidth(float width){
        if(width>0.0 && width<20.0)
            this->width=width;
        else cout<<"Width is not in the given range.\n";
    }
    float getLength(){
    return length;
    }
    float getWidth(){
    return width;
    }
};
int main()
{
    Rectangle r1;
    float l,b;
    cout<<"Enter length and width of rectangle:";
    cin>>l>>b;
    r1.setLength(l);r1.setWidth(b);
    r1.Area();r1.Perimeter();
    return 0;
}
