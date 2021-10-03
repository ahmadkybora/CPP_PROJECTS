#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<iostream.h>
#include<conio.h>
int x;
int y;
int x1;
int x2;
int y1;
int y2;
int *pointer;
char key;
int main(){
clrscr();
int driver=0,mode=0;
initgraph(&driver,&mode,"");
*pointer=0;
pointer=&x;
pointer=&y;
*pointer=10;
pointer=&x1;
*pointer=400;
pointer=&y1;
*pointer=50;
pointer=&x2;
*pointer=420;
pointer=&y2;
while(1){
setcolor(0);
setfillstyle(1,0);
fillellipse(x,y,25,25);
setfillstyle(1,11);
fillellipse(x,y,25,25);
setcolor(11);
x++;
y++;
if(y==430){
x+=5;
y-=5;
}
if(x==500){
x-=5;
y-=5;
}
setcolor(0);
setfillstyle(1,0);
bar(x1,y1,x2,y2);
setfillstyle(1,12);
bar(x1,y1,x2,y2);
setcolor(12);

if(kbhit())
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

getch();
return 0;
}