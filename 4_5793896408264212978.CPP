#include<graphics.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
class cadr{
public:
int cadrgame();
int cadrinfo();
};
class menue{
public:
int pingpong();
};
class ball{
public:
int baller();
};
//object of menue
menue menuer;
//object of wall
cadr wallgame;
cadr wallinfo;
//object of ball
ball toop;
//varable global
int x,y,r;
int main(){
clrscr();
int driver=0,mode=0;
initgraph(&driver,&mode,"");
//


wallgame.cadrgame();
wallinfo.cadrinfo();
//
menuer.pingpong();
toop.baller();

getch();
return 0;
}
int menue::pingpong(){
setcolor(12);
outtextxy(200,200,"salam my friend...");
delay(1000);
outtextxy(210,210,"pingpong!!!");
delay(1000);
setcolor(3);
outtextxy(210,190,"loading....");
for(int i=0;i<255;i++){
delay(10);
line(150+i,200,150+i,240);
}
}
int ball::baller(){
setcolor(1);
setfillstyle(1,9);
fillellipse(x,y,r,r);
}
int cadr::cadrinfo(){
setcolor(1);
setfillstyle(1,10);
bar(510,1,640,5);
bar(510,475,640,480);
bar(635,1,640,480);
bar(510,1,515,480);
}
int cadr::cadrgame(){
setcolor(1);
setfillstyle(1,12);
bar(1,1,500,10);
bar(1,470,500,480);
bar(500,1,510,480);
bar(1,1,10,480);
}