#include<iostream>

using namespace std;
int main(){
   float cal,fat;
   cout<<"Enter amount of calories :";
   cin>>cal;
   cout<<"Enter the amount of fat in grams :";
   cin>>fat;

   
   float calf=fat*9;
   float totalc=cal;
   float calfp=(calf/totalc)*100;
    if(cal<0 || fat<0){
        cout<<"invalid input calories or fat cant be negative";
    }
    else if(calf>totalc){
        cout<<"Either calories or fat in gram is incorrect ";
    }
    else{
   cout<<"Percentage of Calories from Fat is : "<<calfp<<"%"<<endl;
   if(calfp<30){
    cout<<"Food is low in fat!!";
   }}


}