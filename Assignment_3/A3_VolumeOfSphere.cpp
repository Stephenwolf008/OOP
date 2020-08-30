#include<iostream>
#include<math.h>
using namespace std;
inline float sphereVolume(float radius){
    return 4.0 / 3.0 * 3.14159 * pow(radius, 3);
}
int main(){
float radius;
cout<<"Enter radius of sphere=";
cin>>radius;
cout<<"Volume of sphere="<<sphereVolume(radius);
}
