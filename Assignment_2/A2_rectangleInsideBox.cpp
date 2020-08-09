#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class Rectangle{
private:
    float x[4];
    float y[4];
    char c,e;
public:
    float r,x1,y1;float l,w;
    Rectangle(){
        Set();
    }
    void Set(){float diagonal[2],sides[4];int a=0,b=0;
    this->l=l;this->w=w;
        //checking for co-ordinates in range.
    for(int i=0;i<4;i++){
        cin>>x[i]>>y[i];
        if((x[i]>0 && y[i]>0) && (x[i]<20.0 && y[i]<20.0))
            continue;
        else{
            cout<<"Co-ordinate not in range.Enter again.\n";
            i--;}}
        //checking whether it is rectangle.
        //it will not work if rectangle is tilted in first quadrant.
            for(int i=0;i<4;i++)
                for(int j=i+1;j<4;j++){if(x[i]<x[j])this->x1=x[i];if(x[i]>x[j])this->x1=x[j];
                if(y[i]<y[j])this->y1=y[i];if(y[i]>y[j])this->y1=y[j];
                        if(x[i]==x[j])
                        {sides[a]=sqrt(pow(y[i]-y[j],2));this->r=sides[a];a++;}else
                        if(y[i]==y[j])
                        {sides[a]=sqrt(pow(x[i]-x[j],2));a++;}else
                        if(x[i]!=x[j] && y[i]!=y[j] && b!=2)
                        {diagonal[b]=sqrt(pow(y[i]-y[j],2)+pow(x[i]-x[j],2));b++;}}
         if(a==4 && diagonal[0]==diagonal[1]){
                    for(int i=0;i<4;i++)
                        for(int j=i+1;j<4;j++)
                            if(sides[i]==sides[j])
                                b++;
                if(b==4 || b==8){ //Calling all functions
                    cout<<"It is a rectangle\n";
                    l=length(sides,b);
                    this->l=l;
                    w=width(sides,b);
                    this->w=w;
                    perimeter(l,w);
                    area(l,w);
                    square(l,w);}
                else
                    {cout<<"It is not a rectangle\n";exit(0);}
                }
                else
                    {cout<<"It is not a rectangle\n";exit(0);}}

//Calculating length.
    float length(float sides[],int b){float l;
    if(b!=8)
        {for(int i=0;i<4;i++)
                for(int j=i+1;j<4;j++)
                    if(sides[i]>sides[j])
                            {l=sides[i];break;}}
    else l=sides[0];
        cout<<"Length="<<l<<endl;
        return l;}
//Calculating width.
    float width(float sides[],int b){float w;
    if(b!=8)
        {for(int i=0;i<4;i++)
                for(int j=i+1;j<4;j++)
                    if(sides[i]>sides[j])
                            {w=sides[j];break;}}
    else w=sides[0];
        cout<<"Width="<<w<<endl;
        return w;}
//Checking whether rectangle is also a square.
    void square(float l,float w){
    if(l==w)
        cout<<"It is a square\n";
    else
        cout<<"It is not a square\n";}
//Calculating perimeter.
    void perimeter(float l,float w){
    cout<<"Perimeter="<<2*(l+w)<<endl;
    }
//Calculating area.
    void area(float l,float w){
    cout<<"Area="<<l*w<<endl;
    }
//Function for drawing rectangle in 25*25 box
    void setFillCharacter(char c){
    this->c=c;
    }
    void setPerimeterCharacter(char e){
    this->e=e;
    }
//The Box is on the XY plane so the rectangle is corresponded to it.
    void Draw(){float b,s;int z=1,u=1;
        if(l==r)
            b=w;
        else if(w==r)b=l;
    for(int i=0;i<=25;i++){
        cout<<"*";
        for(int j=0;j<=24;j++){
               if(i==0 || i==25)
                cout<<"*";
               else
                if(i>=25-(r+y1) && i<=25-y1){if(j==0){
            for(int k=u;k<=z;k++){
                for(int l=1;l<x1;l++){
                    cout<<" ";}
                for(int m=1;m<=b+1;m++){
                    if(k==1 || k==r+1)
                        cout<<e;else
                    if(m==1 || m==b+1)
                        cout<<e;
                    else cout<<c;}
                }z++;u++;}else if(j==25-b-x1)cout<<"*";else cout<<" ";}else
                if(j==24)
                    cout<<"*";
                else cout<<" ";}
        cout<<"\n";}
      }
};
int main()
{
    char c,e;
    cout<<"Enter X and Y co-ordinates of four corners of rectangle:";
    Rectangle r1;
    cout<<"Enter the character for the body of rectangle=";
    cin>>c;
    r1.setFillCharacter(c);
    cout<<"Enter the character for the perimeter of rectangle=";
    cin>>e;
    r1.setPerimeterCharacter(e);
    r1.Draw();
    return 0;
}

