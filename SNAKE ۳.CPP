#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
class snake{
public:
mar();
marbody();
};
class ei{
public:
egg();
};
ei tokhm;
//
snake afee;
int xtemp1,ytemp1,xtemp2,ytemp2;
int xd,yd;
int max=15;
int x,y,r=4;
int xmar[5000],ymar[5000],rmar=5;
char key;
int main(){
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
x=rand()%640;
y=rand()%475;
tokhm.egg();
while(1){
afee.mar();
if(kbhit())
key=getch();
switch(key){
case 97:   //a   left
	if(xd==0){
	xd=-10;
	yd=0;
	}
break;
case 100:     //d   right
	if(xd==0){
	xd=10;
	yd=0;
	}
break;
case 119:      //w  up
	if(yd==0){
	yd=-10;
	xd=0;
	}
break;
case 115:  //s   dw
	if(yd==0){
	yd=10;
	xd=0;
	}
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
}
int snake::mar(){
xtemp1=xmar[0];
ytemp1=ymar[0];
xmar[0]+=xd;
ymar[0]+=yd;
for(int i=1;i<max;i++){
    xtemp2=xtemp1;
    xtemp1=xmar[i];
    xmar[i]=xtemp2;

    ytemp2=ytemp1;
    ytemp1=ymar[i];
    ymar[i]=ytemp2;

setcolor(1);
setfillstyle(1,GREEN);
fillellipse(xmar[i],ymar[i],rmar,rmar);
delay(10);
setcolor(0);
setfillstyle(1,0);
fillellipse(xmar[i],ymar[i],rmar,rmar);
}
if(xmar[0]>640)
xmar[0]=0;
if(xmar[0]<0)
xmar[0]=640;
if(ymar[0]>475)
ymar[0]=0;
if(ymar[0]<0)
ymar[0]=475;
if(xmar[0]==x&&ymar[0]==y)
tokhm.egg();
max++;
}
