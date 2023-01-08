#include<iostream>
#include<cmath>
using namespace std;
 void result();
 int height,lenght,width;
   string op;
main(){
  

   cout<<"Enter Height in  meters ";
   cin>>height;
   cout<<"Enter lenght in meters ";
   cin>>lenght;
   cout<<"Enter width in meters ";
   cin>>width;
   cout<<"Enter operation wants to perform ";
   cin>>op;
    result();

  }

 void result(){
   if(op=="centimeter"){
 int   centimeter_Ans=((width*100)*(lenght*100)*(height*100))/(3);
       cout<<centimeter_Ans <<endl;}
   if(op=="milimeter") {
 float   milimeter_Ans=((width*1000)*(lenght*1000)*(height*1000))/(3);
       cout<<milimeter_Ans <<endl;}

     if(op=="kilometer") {
 float  kilo_Ans=((width*0.001)*(lenght*0.001)*(height*0.001))/(3) ;
       cout<<kilo_Ans <<endl; }



}
