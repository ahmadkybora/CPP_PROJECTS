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
int information();
int cadrgame();
int cadrinfo();
};
class ball{
public:
int baller();
int character();
};
char name[20],family[20],old[20],job[20];
//object of menue
menue menuer;
logo logoer;
//object of ball
ball toop;
//varable global
int socer=0;
int x1raket=200,x2raket=300;
int moveraket=0;
int ballspeedx=5,ballspeedy=3;
int xball=50,yball=50,radius=25;
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
//
while(1){
toop.baller();
toop.character();
if(kbhit()){
key=getch();
switch(key){
case 49:
	setfillstyle(1,0);
	bar(175,175,450,350);
	menuer.information();
	menuer.cadrgame();
	menuer.cadrinfo();
	gotoxy(15,15);
	cout<<"press any space key to start game!!!";
break;
case 32:
	setfillstyle(1,0);
	bar(100,220,450,260);
break;
case 97:
	if(moveraket<=-180)
	break;
	else
	moveraket-=10;
break;
case 100:
	if(moveraket>=190)
	break;
	else
	moveraket+=10;
break;
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
for(int i=0;i<15;i++){
setbkcolor(x);
delay(300);
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
int menue::information(){

gotoxy(30,12);
cout<<"enter name=";
cin>>name;
gotoxy(30,13);
cout<<"enter family=";
cin>>family;
gotoxy(30,14);
cout<<"enter old=";
cin>>old;
gotoxy(30,15);
cout<<"enter job=";
cin>>job;
}
int menue::cadrinfo(){
setcolor(1);
setfillstyle(1,10);
bar(510,1,640,5);
bar(510,475,640,480);
bar(635,1,640,480);
bar(510,1,515,480);
gotoxy(66,2);
cout<<"information:";
gotoxy(66,3);
cout<<"name="<<name;
gotoxy(66,4);
cout<<"family="<<family;
gotoxy(66,5);
cout<<"old="<<old;
gotoxy(66,6);
cout<<"job="<<job;
gotoxy(66,10);
cout<<"2 to exit";
}
int menue::cadrgame(){
setcolor(1);
setfillstyle(1,12);
bar(1,1,500,10);
bar(1,470,500,480);
bar(500,1,510,480);
bar(1,1,10,480);
setfillstyle(1,0);
bar(150,150,400,250);
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
}
int ball::baller(){
setcolor(1);
setfillstyle(1,9);
fillellipse(xball,yball,radius,radius);
delay(10);
setcolor(0);
setfillstyle(1,0);
fillellipse(xball,yball,radius,radius);
if(xball<41)
ballspeedx=-5;
if(xball>469)
ballspeedx=-5;
if(yball<41)
ballspeedy=-3;
xball+=ballspeedx;
yball+=ballspeedy;
if(yball>400){
 if(xball>=x1raket&&xball<=x2raket){
  ballspeedy=-3;
  socer+=100;
  gotoxy(66,14);
  cout<<"socer="<<socer;
}
 else{
  cleardevice();
  clrscr();
  outtextxy(300,200,"game over");
  outtextxy(300,250,"press 2 to left");
  outtextxy(300,300,"prees 1 to start");
}
}
}
int ball::character(){
setcolor(1);
setfillstyle(1,14);
bar(moveraket+x1raket,420,moveraket+x2raket,465);
delay(10);
setcolor(0);
setfillstyle(1,0);
bar(moveraket+x1raket,420,moveraket+x2raket,465);
}
