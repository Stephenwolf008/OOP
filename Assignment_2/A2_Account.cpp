#include<iostream>
#include<stdlib.h>
using namespace std;
class Account{
private:
    int accountBalance;
public:
    Account(int accountBalance=0){
        if(accountBalance>=0)
            this->accountBalance = accountBalance;
        else
        {
            this->accountBalance=0;
            cout<<"initial balance was invalid";
        }
    }
    int Credit(int a){
        accountBalance=accountBalance+a;
    }
    int Debit(int a){
        if(a<=accountBalance)
        accountBalance=accountBalance-a;
        else
            cout<<"Debit amount exceeded account balance.\n";
    }
    int getBalance(){
        return accountBalance;
    }
};
int main()
{
    int initial,ch,a;
    cout<<"Enter the initial balance for account 1:";
    cin>>initial;
    Account A1(initial);
    do{
    cout<<"Enter your choice:\n1 Debit amount\n2 Credit amount\n3 Display account balance\n";
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout<<"Enter amount to debit:";
        cin>>a;
        A1.Debit(a);
        break;
    case 2:
        cout<<"Enter amount to credit:";
        cin>>a;
        A1.Credit(a);
        break;
    case 3:
        cout<<A1.getBalance()<<"\n";
        break;
    default:
        cout<<"Invalid Option.\n\n";
    cout<<"Enter the initial balance for account 2:";
    cin>>initial;
    Account A2(initial);
    do{
    cout<<"Enter your choice:\n1 Debit amount\n2 Credit amount\n3 Display account balance\n";
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout<<"Enter amount to debit:";
        cin>>a;
        A2.Debit(a);
        break;
    case 2:
        cout<<"Enter amount to credit:";
        cin>>a;
        A2.Credit(a);
        break;
    case 3:
        cout<<A2.getBalance()<<"\n";
        break;
    default:
        cout<<"Invalid Option.";
        exit(0);
    }}while(1);
    }}while(1);
    return 0;
}
