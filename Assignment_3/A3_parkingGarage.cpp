#include<iostream>
using namespace std;
class parkingGarage{
private:
    float charge;
    float hours;
public:
    parkingGarage(float hours){
        this->hours=hours;
        this->charge=2;
    }
    float getHours(){
    return hours;
    }
    float calculateCharges(){
        if(hours>0 && hours<=3){
            return charge;
        }
        else if(hours>3 && hours<24){
            float newH=hours-3;
            int H=int(newH);
            if(newH/float(H)!=1)
                charge=2.5+(0.5*H);
            else
                charge=2+(0.5*newH);
            if(charge>10)
                return 10;
            else return charge;
        }
        else{
            charge=10;
            return charge;
        }
    }
};
int main(){
    float hour[3];
    for(int i=0;i<=2;i++){
        cout<<"Enter number of hours car "<<i+1<<" parked:";
        cin>>hour[i];
    }
    parkingGarage C1(hour[0]),C2(hour[1]),C3(hour[2]);
    cout<<"Car\t"<<"Hours\t"<<"Charge\t"<<endl;
    cout<<"1\t";
    cout<<C1.getHours()<<"\t";
    cout<<C1.calculateCharges()<<endl;
    cout<<"2\t";
    cout<<C2.getHours()<<"\t";
    cout<<C2.calculateCharges()<<endl;
    cout<<"3\t";
    cout<<C3.getHours()<<"\t";
    cout<<C3.calculateCharges()<<endl;
    cout<<"Total\t"<<C1.getHours()+C2.getHours()+C3.getHours()<<"\t"<<C1.calculateCharges()+C2.calculateCharges()+C3.calculateCharges();
}
