#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
class Rectangle{
private:
    float x[4];
    float y[4];
public:
    Rectangle(){
        Set();
    }
   Void Set(){float diagonal[2],sides[4];int a=0,b=0;float l,w;
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
                for(int j=i+1;j<4;j++){
                        if(x[i]==x[j])
                        {sides[a]=sqrt(pow(y[i]-y[j],2));a++;}else
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
                    w=width(sides,b);
                    perimeter(l,w);
                    area(l,w);
                    square(l,w);}
                else
                    cout<<"It is not a rectangle\n";
                }
                else
                    cout<<"It is not a rectangle\n";}

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
};
int main()
{
    cout<<"Enter X and Y co-ordinates of four corners of rectangle:";
    Rectangle r1;
    return 0;
}

