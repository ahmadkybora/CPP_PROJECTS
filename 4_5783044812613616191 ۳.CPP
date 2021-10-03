#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<iostream.h>
#include<conio.h>
int x=1;
int y=1;
int sx=5;
int sy=3;
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
if(x<1||x>629)
sx=sx*-1;
if(y<1||y>429)
sy=sy*-1;
x+=sx;
y+=sy;




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
	x1-=10;
	x2-=10;
break;
case 100:
	x1+=10;
	x2+=10;
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