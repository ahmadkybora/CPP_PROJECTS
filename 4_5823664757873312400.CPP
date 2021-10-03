#include<graphics.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
class logo{
public:
int pingpong();
int bkcolor();
};
class menue{
public:
int wellcome();
int menuestartgame();
int startgame();
int cadrgame();
int cadrinfo();
};
class ball{
public:
int baller();
};
//object of menue
menue menuer;
logo logoer;
//object of ball
ball toop;
//varable global
int x,y,r;
int key;
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
//wallgame.cadrgame();
//wallinfo.cadrinfo();
//
logoer.pingpong();
logoer.bkcolor();
menuer.wellcome();
menuer.menuestartgame();
//
while(1){
key=getch();
if(kbhit()){
switch(key){
case 49:
	menuer.startgame();
	menuer.cadrgame();
	menuer.cadrinfo();break;
case 50:
	exit(0);
break;
}
}
}

getch();
return 0;
}
int logo::bkcolor(){
int x=0;
for(int i=0;i<10;i++){
setbkcolor(x);
delay(100);
x++;
}
setbkcolor(0);
delay(100);
outtextxy(200,200,"salam mr.ebrahimi:)");
delay(1000);
setfillstyle(1,0);
bar(200,200,350,220);
}
int logo::pingpong(){
setcolor(RED);
settextstyle(5,0,5);
outtextxy(250,200,"pingpong");
delay(1000);
setfillstyle(1,0);
bar(250,200,320,220);
delay(1000);
}
int menue::startgame(){
outtextxy(200,150,"please name:");
outtextxy(200,160,"please family:");
outtextxy(200,170,"please old:");
outtextxy(200,180,"please sex:");
}
int menue::cadrinfo(){
setcolor(1);
setfillstyle(1,10);
bar(510,1,640,5);
bar(510,475,640,480);
bar(635,1,640,480);
bar(510,1,515,480);
}
int menue::cadrgame(){
setcolor(1);
setfillstyle(1,12);
bar(1,1,500,10);
bar(1,470,500,480);
bar(500,1,510,480);
bar(1,1,10,480);
}
int menue::menuestartgame(){
setfillstyle(1,0);
bar(150,150,350,350);
}
int menue::wellcome(){
setcolor(12);
outtextxy(200,200,"salam my friend...");
delay(1000);
outtextxy(210,210,"pingpong!!!");
delay(1000);
setfillstyle(1,0);
bar(200,200,350,220);
setcolor(3);
outtextxy(210,190,"loading....");
for(int i=0;i<255;i++){
delay(10);
line(200+i,200,200+i,240);
}
delay(1000);
setfillstyle(1,0);
bar(150,180,470,250);
setfillstyle(1,1);
bar(200,180,450,250);
outtextxy(225,210,"prees number 1 to start");
setfillstyle(1,4);
bar(200,250,450,310);
outtextxy(225,260,"press number 2 to exit");
delay(1000);
setfillstyle(1,0);
bar(175,175,450,350);
}
int ball::baller(){
setcolor(1);
setfillstyle(1,9);
fillellipse(x,y,r,r);
}