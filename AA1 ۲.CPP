#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void main(){
clrscr();

int driver=0,mode=0;
initgraph(&driver,&mode,"path");


int i=3,j=3,n,tir,s,k;
char key;


for(s=0;s<80;s++){
textcolor(5);
gotoxy(s+1,2);
cprintf("=");
gotoxy(s+1,22);
cprintf("=");
}
for(s=0;s<21;s++){
textcolor(4);
gotoxy(1,s+2);
cprintf("*");
gotoxy(80,s+2);
cprintf("*");
}
while(1){
int a=1;
for(k=0;k>=0;k+=a){
gotoxy(k+50,3);
textcolor(6);
if(a==1)
cprintf("><>");
else
cprintf("<><");
delay(100);
gotoxy(k+50,3);
cout<<"    ";
if(k==9)
a=-1;
if(kbhit()){
key=getch();
switch(key){
case 32:{
	  if(tir==2){
		for(n=i;n<80;n++){
		gotoxy(n+1,j+1);
		textcolor(3);
		cprintf("=>");
		delay(25);
		gotoxy(n+1,j+1);
		cout<<"  ";
	}
	}
	if(tir==1){
	  for(n=i;n>0;n--){
	    gotoxy(n+1,j+1);
	    textcolor(3);
	    cprintf("<=");
	    delay(25);
	    gotoxy(n+1,j+1);
	    cout<<"  ";
	    }
	    }
	if(tir==3){
	  for(n=j;n>0;n--){
	    gotoxy(i+1,n+1);
	    textcolor(3);
	    cprintf("!");
	    delay(25);
	    gotoxy(i+1,n+1);
	    cout<<" ";
	    }
	    }
	    if(tir==4){
	    for(n=j;n<25;n++){
	    gotoxy(i+1,n+1);
	     textcolor(3);
	     cprintf("|");
	     delay(25);
	     gotoxy(i+1,n+1);
	     cout<<" ";
	     }
	     }
}
break;
case 97:{
	gotoxy(i+1,j+1);
	cout<<"<><";
	delay(50);
	gotoxy(i+1,j+1);
	cout<<"   ";
	i--;
	tir=1;
}
break;
case 100:{
	 gotoxy(i+1,j+1);
	 cout<<"><>";
	 delay(50);
	 gotoxy(i+1,j+1);
	 cout<<"   ";
	 i++;
	 tir=2;
}
break;
case 119:{
	 gotoxy(i+1,j+1);
	 cout<<"<W><";
	 delay(50);
	 gotoxy(i+1,j+1);
	 cout<<"    ";
	 j--;
	 tir=3;
}
break;
case 115:{
	 gotoxy(i+1,j+1);
	 cout<<"><M>";
	 delay(50);
	 gotoxy(i+1,j+1);
	 cout<<"    ";
	 j++;
	 tir=4;
}
break;
case 49:
	exit(0);
break;
default:{
	cout<<"invalid key";
	delay(100);
	cout<<"           ";
	}
}
}
}
}
getch();
}