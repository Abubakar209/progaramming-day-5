#include<iostream>
#include<windows.h>
using namespace std;
   void printMaze();
   void gotoxy(int x, int y);
   char getCharAtxy(short int x,short int y);

main(){


   system("cls");
   printMaze();
   int P_X=2;
   int P_Y=2;
 bool gamerun=true;
  while(gamerun){
 
     if(GetAsyncKeyState(VK_RIGHT))
     { char nextLocation=getCharAtxy(P_X+1,P_Y);
      if (nextLocation == ' '){
        gotoxy(P_X,P_Y);
        cout<<" ";
        P_X=P_X+1;
        gotoxy(P_X,P_Y);
        cout<<"p";


}//nesting if bracs

}//if right


     if(GetAsyncKeyState(VK_LEFT))
     { char nextLocation=getCharAtxy(P_X-1,P_Y);
      if (nextLocation == ' '){
        gotoxy(P_X,P_Y);
        cout<<" ";
        P_X=P_X-1;
        gotoxy(P_X,P_Y);
        cout<<"p";


}//nesting if bracs

}//if left


     if(GetAsyncKeyState(VK_UP))
     { char nextLocation=getCharAtxy(P_X,P_Y-1);
      if (nextLocation == ' '){
        gotoxy(P_X,P_Y);
        cout<<" ";
        P_Y=P_Y-1;
        gotoxy(P_X,P_Y);
        cout<<"p";


}//nesting if bracs

}//if up



     if(GetAsyncKeyState(VK_DOWN))
     { char nextLocation=getCharAtxy(P_X,P_Y+1);
      if (nextLocation == ' '){
        gotoxy(P_X,P_Y);
        cout<<" ";
        P_Y=P_Y+1;
        gotoxy(P_X,P_Y);
        cout<<"p";


}//nesting if bracs

}//if right



Sleep(200);







}//while brac







}











 void printMaze()
{

  cout<<"################################"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"################################"<<endl;


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








