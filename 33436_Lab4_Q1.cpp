#include<iostream>
#include<string.h>
using namespace std;

int main(){
    long long num;
    cout<<" Enter a Number : ";
    cin>>num;

    long long temp=num;

    while(temp>70 || temp<-70){
        int lastdigit = num%10;
        temp/=10;
        temp= temp -(2*lastdigit);
    }
    if(temp==0 || temp==7 || temp==-7){
        cout<<"Number is divisible by 7.\n";
    }
    else{
        cout<<"Number is not Divisible by 7.\n";
    }
    
    
}