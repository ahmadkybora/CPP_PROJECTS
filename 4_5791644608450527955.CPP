#include<graphics.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
class wall{
public:
int wallerup();
int wallerdown();
int wallerright();
int wallerleft();
};
class information{
public:
int info_up();
int info_down();
int info_right();
int info_left();
};
class ball{
public:
int baller();
};
//object of wall
wall wallup;
wall walldown;
wall wallright;
wall wallleft;
//object of information
information infor_up;
information infor_down;
information infor_right;
information infor_left;
//onhect of ball
ball toop;
//varable global
int x,y,r;
int main(){
int driver=0,mode=0;
initgraph(&driver,&mode,"");
//
wallup.wallerup();
walldown.wallerdown();
wallright.wallerright();
wallleft.wallerleft();
//
infor_up.info_up();
infor_down.info_down();
infor_right.info_right();
infor_left.info_left();
//
toop.baller();

getch();
return 0;
}
int ball::baller(){
setcolor(1);
setfillstyle(1,9);
fillellipse(x,y,r,r);
}
int information::info_up(){
setcolor(1);
setfillstyle(1,10);
bar(510,1,640,5);
}
int information::info_down(){
setcolor(1);
setfillstyle(1,10);
bar(510,475,640,480);
}
int information::info_right(){
setcolor(1);
setfillstyle(1,10);
bar(635,1,640,480);
}
int information::info_left(){
setcolor(1);
setfillstyle(1,10);
bar(510,1,515,480);
}
int wall::wallerup(){
setcolor(1);
setfillstyle(1,12);
bar(1,1,500,10);
}
int wall::wallerdown(){
setcolor(1);
setfillstyle(1,12);
bar(1,470,500,480);
}
int wall::wallerright(){
setcolor(1);
setfillstyle(1,12);
bar(500,1,510,480);
}
int wall::wallerleft(){
setcolor(1);
setfillstyle(1,12);
bar(1,1,10,480);
}