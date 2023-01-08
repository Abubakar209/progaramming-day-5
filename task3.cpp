#include<iostream>
using namespace std;
void task_complete(int hours,int days,int workers);

main(){

  int days;
  int hours;
  int workers;
 
  cout<<"Enter Hours ";
  cin>>hours;

  cout<<"Enter days ";
  cin>>days;

  cout<<"Enter Workers ";
  cin>>workers;

  task_complete(hours,days,workers);

}
void task_complete(int hours,int days,int workers){

   int total_hours=days*10;//10hour per day work
   cout<<total_hours<<endl;

   int hours_per=total_hours*.9;
   cout<<hours_per<<endl;

   int final_hours=hours_per*workers;
   int final_hour_afterdec=final_hours-hours;

   if(final_hour_afterdec>hours){
    cout<<"Yes "<<final_hour_afterdec<<" left";
}

   if(final_hour_afterdec<hours){
    cout<<"no "<<final_hour_afterdec<<" needed";
}






}

