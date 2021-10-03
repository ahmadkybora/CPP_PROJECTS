#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
int i=0,j=0;
char key;
int main(){
clrscr();
while(1){
switch(key){
if(kbhit())
key=getch();
case 97:
       gotoxy(i+1,j+1);
       cout<<"*";
       delay(100);
       gotoxy(i+1,j+1);
       cout<<" ";
       i--;
break;
case 100:
       gotoxy(i+1,j+1);
       cout<<"*";
       delay(100);
       gotoxy(i+1,j+1);
       cout<<" ";
       i++;
break;
case 50:
       exit(0);
break;
}
}
getch();
return 0;
}