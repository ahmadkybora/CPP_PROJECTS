#include<graphics.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
class tank{
public:
int body();
int gun();
int body_saye();
int gun_saye();
int tir();
int tir_saye();
};
class wall{
public:
int wallup();
int walldown();
int wallleft();
int wallright();
int wall_soccer();
};
char key;
//harkate tir
int mtud;
//harkate tank right & left
int mrl;
//harkate tank up & down
int mud;
int sum=5;
int sum_tir=10;
int i=0;
int main(){
clrscr();
int gdriver= DETECT,gmode;
initgraph(&gdriver,&gmode,"");
//object
while(1){
tank tanker;
wall waller;
//start program
tanker.body();
tanker.gun();
delay(100);
tanker.body_saye();
tanker.gun_saye();

waller.wallup();
waller.walldown();
waller.wallleft();
waller.wallright();
waller.wall_soccer();


if(kbhit()){
key=getch();
switch(key){
case 100:
	mrl+=sum;
break;
case 97:
	mrl-=sum;
break;
case 115:
	mud+=sum;
break;
case 119:
	mud-=sum;
break;
case 49:
	while(1){
	outtextxy(200,i+300,"*");
	delay(10);
	outtextxy(200,i+300," ");
	i--;
	}

break;
case 32:
	exit(0);
break;
}
}
}
getch();
closegraph();
return 0;
}
int tank::tir(){
setfillstyle(1,12);
bar(260,mtud+240,270,mtud+250);
}
int tank::tir_saye(){
setfillstyle(1,0);
bar(260,mtud+240,270,mtud+250);
}
int tank::body(){
setfillstyle(1,11);
bar(mrl+250,mud+250,mrl+280,mud+280);
}
int tank::body_saye(){
setfillstyle(1,0);
bar(mrl+250,mud+250,mrl+280,mud+280);
}
int tank::gun(){
setfillstyle(1,11);
bar(mrl+260,mud+240,mrl+270,mud+250);
}
int tank::gun_saye(){
setfillstyle(1,0);
bar(mrl+260,mud+240,mrl+270,mud+250);
}
int wall::wallup(){
setfillstyle(2,10);
bar(1,1,550,5);
}
int wall::walldown(){
setfillstyle(2,10);
bar(1,475,550,480);
}
int wall::wallright(){
setfillstyle(2,10);
bar(545,1,550,480);
}
int wall::wallleft(){
setfillstyle(2,10);
bar(1,1,5,480);
}
int wall::wall_soccer(){
setfillstyle(1,14);
bar(550,1,555,480);
bar(550,1,640,5);
bar(635,1,640,480);
bar(550,475,640,480);
}
