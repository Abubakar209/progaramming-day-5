#include<iostream>
#include<windows.h>
using namespace std;
   void printMaze();
   void gotoxy(int x, int y);
   char getCharAtxy(short int x,short int y);
   void print_pac(int P_X,int P_Y);
   void erase_pac(int P_X,int P_Y);
   void res_score(int score_1);
 
main(){

  int score=0;
 int P_X=4;
   int P_Y=24;
    
   system("cls");
   printMaze();
  
   
   
 bool gamerun=true;
  while(gamerun){
       
     if(GetAsyncKeyState(VK_RIGHT))
     { char nextLocation=getCharAtxy(P_X+1,P_Y);
      if (nextLocation == ' '){
      erase_pac(P_X,P_Y);
        P_X=P_X+1;
      print_pac(P_X,P_Y);


}//nesting if bracs
     

      if (nextLocation == '.'){
       erase_pac(P_X,P_Y);
          P_X=P_X+1;
        score=score+1;
         res_score(score);
         
        
        print_pac(P_X,P_Y);
}



 if (nextLocation == 'G'){
   
        
       erase_pac(P_X,P_Y);
          P_X=4;
         P_Y=24;
             score =0;
           res_score(score);
         print_pac(P_X,P_Y);
        
        
       
}
}//if right


     if(GetAsyncKeyState(VK_LEFT))
     { char nextLocation=getCharAtxy(P_X-1,P_Y);
      if (nextLocation == ' '){
      erase_pac(P_X,P_Y);
        P_X=P_X-1;
        print_pac(P_X,P_Y);

}//nesting if bracs
  if (nextLocation == 'G'){
        erase_pac(P_X,P_Y);
         P_X=4;
         P_Y=24;
         score =0;
         res_score(score);
        print_pac(P_X,P_Y);
           
       
}
 if (nextLocation == '.'){
       erase_pac(P_X,P_Y);
          P_X=P_X-1;
        score=score+1;
         res_score(score);
         
        
        print_pac(P_X,P_Y);
}

}//if left


     if(GetAsyncKeyState(VK_UP))
     { char nextLocation=getCharAtxy(P_X,P_Y-1);
      if (nextLocation == ' '){
         erase_pac(P_X,P_Y);
        P_Y=P_Y-1;
        print_pac(P_X,P_Y);


}//nesting if bracs
       if (nextLocation == 'G'){
         erase_pac(P_X,P_Y);
         P_X=4;
         P_Y=24;
        score =0;
         res_score(score);
        print_pac(P_X,P_Y); 
}
 if (nextLocation == '.'){
       erase_pac(P_X,P_Y);
          P_Y=P_Y-1;
        
         res_score(score);
         
        
        print_pac(P_X,P_Y);
}

}//if up



     if(GetAsyncKeyState(VK_DOWN))
     { char nextLocation=getCharAtxy(P_X,P_Y+1);
      if (nextLocation == ' '){
       erase_pac(P_X,P_Y);
        P_Y=P_Y + 1;
        print_pac(P_X,P_Y);


}//nesting if bracs
  if (nextLocation == 'G'){
      erase_pac(P_X,P_Y);

         P_X=4;
         P_Y=24;
        score =0;
         res_score(score);
        print_pac(P_X,P_Y);
}

 if (nextLocation == '.'){
       erase_pac(P_X,P_Y);
          P_Y=P_Y+1;
        score=score+1;
         res_score(score);
         print_pac(P_X,P_Y);
}

}//if right







Sleep(100);







}//while brac







}











 void printMaze()
{ 
cout<<    "  ##########################################################################                          "<<endl;
cout<<    "  ||.. ........................................................ .......   ||                          "<<endl;
cout<<    "  ||.. %%%%%%%%%%%%%       ....      %%%%%%%%%%%%%%%%    |%|..     %%%%%% ||                          "<<endl; 
cout<<    "  ||..    |%|    |%|   .. |%|....    |%|          |%|    |%|..       |%|  ||                          "<<endl; 
cout<<    "  ||..    |%|    |%|   .. |%|....    |%|          |%|    |%|..        |%| ||                          "<<endl; 
cout<<    "  ||..    %%%%%%%%%%   .. |%|....    %%%%%%%%%%%%%%%%       ..     %%%%%% ||                          "<<endl; 
cout<<    "  ||..    |%|          .. |%|....   ..................  |%| ..          . ||                          "<<endl; 
cout<<    "  ||..    %%%%%%%%%%%%%.. |%|....   %%%%%%%%%%%%%%%%    |%| ..      %%%%. ||                          "<<endl; 
cout<<    "  ||..                    |%|.      |%|...........      |%| ..      |%| . ||                          "<<endl; 
cout<<    "  ||..    ..............  |%|.  G   |%|..........|%|        ..      |%| . ||                          "<<endl; 
cout<<    "  ||..|%| |%|%%%%%%%%|%| .|%|.  |%|    ..........|%|        ..|%|.        ||                          "<<endl; 
cout<<    "  ||..|%| |%|        |%|..      %%%%%%%    ......|%|         .|%|.        ||                          "<<endl; 
cout<<    "  ||..|%| |%|        |%|..       ...|%|                     . |%|.        ||                          "<<endl; 
cout<<    "  ||..|%|               ..       ...|%|    %%%%%%%%           |%| ..|%|.  ||                          "<<endl; 
cout<<    "  ||..|%| %%%%%%%%%%%%%%..       ...|%|                |%| .. |%|%%%%%%%  ||                          "<<endl; 
cout<<    "  ||.................................................  |%| .............  ||                          "<<endl; 
cout<<    "  ||  ...............................................          ........   ||                          "<<endl; 
cout<<    "  ||..|%|  |%|   |%|..      %%%%%%%%%%%%%%   .....|%|  |%|    ..|%|.      ||                          "<<endl; 
cout<<    "  ||..|%|  |%|   |%|..                       .....|%|  %%%%%              ||                          "<<endl; 
cout<<    "  ||..|%|   .....|%|          ..|%|.     ||                               ||                          "<<endl; 
cout<<    "  ||..|%| %%%%%%%%%%%%%%..       ...|%|                |%| .. |%|%%%%%%%  ||                          "<<endl; 
cout<<    "  ||.................................................  |%| .............  ||                          "<<endl; 
cout<<    "  ||  ...............................................          ........   ||                          "<<endl; 
cout<<    "  ||      %%%%%%%%%%       ....      %%%%%%%%%%%%%%%%    |%|..     %%%%%% ||                          "<<endl; 
cout<<    "  ||      |%|    |%|   .. |%|....    |%|          |%|    |%|..       |%|  ||                          "<<endl;  
cout<<    "  ##########################################################################                          "<<endl; 
 


}




 void erase_pac(int P_X,int P_Y){
  
   gotoxy(P_X,P_Y);
    cout<<" ";


}

void print_pac(int P_X,int P_Y){
gotoxy(P_X,P_Y);
   cout<<"p";
  
}




 void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
  

}


char getCharAtxy(short int x,short int y){

 CHAR_INFO ci;
 COORD xy ={0,0};
 SMALL_RECT rect={x,y,x,y};
 COORD coordBufsize;
 coordBufsize.X=1;
 coordBufsize.Y=1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufsize, xy ,& rect) ? ci.Char.AsciiChar :' ';


}

 void res_score(int score){
      gotoxy(1,26);
    cout<<"score is  ";
     gotoxy(1,26);  
     cout<<"score is"<<score;

}







