#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
class snake{
public:
mar();
};
class ei{
public:
egg();
};
ei tokhm;
//
snake afee;
int pp=20;
int i=0,j=0;
int x=100,y=20,r=4;
int xmar=20,ymar=20,rmar=10;
int xbody[200],ybody[200];
char key;
int main(){
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");


while(1){
afee.mar();
tokhm.egg();
if(kbhit())
key=getch();
switch(key){
case 97:   //a   left
	xmar-=1;
	xbody[i]-=1;
break;
case 100:     //d   right
	xmar+=1;
	xbody[i]+=1;
break;
case 119:      //w  up
	ymar-=1;

break;
case 115:  //s   dw
	ymar+=1;
break;
case 50:   //2 exit
	exit(0);
break;
}
}
getch();
return 0;
}
int ei::egg(){
setcolor(1);
setfillstyle(1,YELLOW);
fillellipse(x,y,r,r);
//x+=100;
}
int snake::mar(){
setcolor(1);
setfillstyle(1,GREEN);
fillellipse(xmar,ymar,rmar,rmar);
delay(10);
setcolor(0);
setfillstyle(1,0);
fillellipse(xmar,ymar,rmar,rmar);
if(xmar>640)
xmar=0;
if(xmar<0)
xmar=640;
if(ymar>475)
ymar=0;
if(ymar<0)
ymar=475;
if(xmar==x&&ymar==y){
setcolor(0);
setfillstyle(1,2);
fillellipse(x,y,r,r);
setcolor(1);
setfillstyle(1,GREEN);
fillellipse(xbody[i]-pp,ybody[j],rmar,rmar);
delay(10);
setcolor(0);
setfillstyle(1,GREEN);
fillellipse(xbody[i]-pp,ybody[j],rmar,rmar);
pp=pp+20;
}
}
