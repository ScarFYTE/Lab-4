#include<iostream>

using namespace std;
int main(){
    int choice,T_charges=0,quantity,cost;
    char type;
    cout<<"Enter the number of different food types you want to order : ";
    cin>>choice;
    for(int i=0;i<choice;i++){
        cout<<"Enter food type (B/F/P/S) : ";
        cin>>type;

        cout<<"Enter Quantity : ";
        cin>>quantity;

        if(type=='B'||type=='b'){
            cost=200*quantity;
        }
        else if(type=='F'||type=='f'){
            cost=50*quantity;
        }
        else if(type=='P'||type=='p'){
            cost=500*quantity;
        }
        else if(type=='S'||type=='s'){
            cost=150*quantity;
        }
        T_charges+= cost;
    }
    cout<<"Total Charges = Rs "<<T_charges<<endl;
}