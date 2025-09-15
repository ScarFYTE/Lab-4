#include<iostream>

using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter Side A :";
    cin>>a;
    cout<<"Enter Side B :";
    cin>>b;
    cout<<"Enter Side C :";
    cin>>c;
        if(a==b && b==c){
            cout<<"this is a equalateral triangle";
        }
        else if(a!=b && b!=c && a!=c){
            cout<<"this is a scalene triangle";
        }
        else{
            cout<<"this is a isosceles triangle";
        }
}