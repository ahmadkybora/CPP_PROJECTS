#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<iostream.h>
#include<conio.h>
int x;
int y;
int x1=10;
int x2=100;
int y1=400;
int y2=450;
int *pointer;
char key;
int main(){
clrscr();
int driver=0,mode=0;
initgraph(&driver,&mode,"");
while(1){
setcolor(11);
setfillstyle(1,11);
fillellipse(x,y,25,25);
delay(10);
setcolor(0);
setfillstyle(1,0);
fillellipse(x,y,25,25);
x++;
y++;
if(y==430){
x+=5;
y-=5;
}

setcolor(12);
setfillstyle(1,12);
bar(x1,y1,x2,y2);
delay(10);
setcolor(0);
setfillstyle(1,0);
bar(x1,y1,x2,y2);


if(kbhit()){
key=getch();
switch(key){
case 97:
	x1-=5;
	x2-=5;
break;
case 100:
	x1+=5;
	x2+=5;
break;
case 32:
	exit(0);
break;
}
}
}
getch();
return 0;
}