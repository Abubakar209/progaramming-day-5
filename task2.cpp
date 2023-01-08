#include<iostream>
using namespace std;
void tax_res(string vechials, float price,char vechial_code);
main()
{
   while(true){

    string vechail_name;
   float price;
   char vechial_code;
   cout<<"enter vechial name ";
    cin>>vechail_name;
   cout<<"enter vechial code ";
    cin>>vechial_code;
   cout<<"Enter price of vechial";
    cin>>price;
    tax_res(vechail_name,price,vechial_code);
}
  

}

 void tax_res(string vechials, float price,char vechial_code){
   
   if(vechial_code=='M'){
    float motor_result_tax=price*0.06;
    float motor_price=motor_result_tax+price;
    cout<<"final price "<<motor_price;

}


     if(vechial_code=='E'){
    float motor_result_tax=price*0.08;
    float motor_price=motor_result_tax+price;
    cout<<"final price "<<motor_price;

}

  
       if(vechial_code=='S'){
    float motor_result_tax=price*0.1;
    float motor_price=motor_result_tax+price;
    cout<<"final price "<<motor_price;

}


       if(vechial_code=='V'){
    float motor_result_tax=price*0.12;
    float motor_price=motor_result_tax+price;
    cout<<"final price "<<motor_price;

}



      if(vechial_code=='T'){
    float motor_result_tax=price*0.15;
    float motor_price=motor_result_tax+price;
    cout<<"final price "<<motor_price;

}

}
