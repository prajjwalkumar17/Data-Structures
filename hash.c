#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void display(int a[MAX]){
int i;
printf("\nThe hash table is......\nAddrs\tkey\n\n");
for(i=0;i<MAX;i++){
printf("\n%d\t%d",i,a[i]);
}}

void linearprobe(int a[MAX]){
int flag,i,key,addrs,count;
char ans;

do{
flag=0;
count=0;
i=0;
printf("\nEnter 4 digit key.....\n");
scanf("%4d",&key);
addrs=key%MAX;
if(a[addrs]==-1){      //Check if table add is empty
a[addrs]=key;}
else{
printf("\nCollision detected.........");
while(i<MAX){
if(a[i] == -1)
count++;   //COUNT TOTAL EMPTY LOCATIONS
i++;
}
if(count==0){
printf("\nTable is full.....\n");
display(a);
}
printf("\nCollision avoided sucessfully......\n");
for(i=addrs+1;i<MAX;i++){
if(a[i]==-1){                                  //Check entries blank after collision addrs
a[i]=key;
flag=1;
break;
}}
i=0;
while((i<addrs) && (flag==0)){
if(a[i]==-1){                       //If not available after coolision addrs the check before collsion
a[i]=key;
flag=1;
break;
}
i++;
}
}
printf("\nDo you wish to continue....(Y/N)\n");
fflush(stdin);
scanf("%c",&ans);
}
while((ans=='Y') || (ans=='y'));
}

int main(){
int i,a[MAX],choice;
for(i=0;i<MAX;i++)     //initialise the hash addresses with -1 so that can distinguish unfilled with filled
a[i]=-1;

while(1){
printf("\n....................menu......................\n");
printf("\n1.Insert into hash table\n2.display hash table\n3.exit\n\nEnter your chhoice....\n");
scanf("%d",&choice);
switch(choice){

case 1: linearprobe(a);
break;

case 2: display(a);
break;

case 3: exit(0);
break;

default : printf ("\nInvalid choice......\n");
break;
}
}
return 0;
}





