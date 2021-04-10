//Preprocessors

#include <stdio.h>

#define   n 5


int top=-1;

int stack[n];

void push(){
int d;
printf("\nEnter element to push\n");
scanf("%d",&d);
if(top==n-1){
printf("\nStack overflow\n");
}
else{
top++;
stack[top]=d;
}
}


void pop(){
if(top==-1){
printf("Stack is already empty");
}
else{
int j = stack[top];
printf("\nThe popped element is %d",j);
top--;
}
}

void isfull(){
if(top==n-1){
printf("Stack is full");
}else{
printf("\nstack is empty for %d places\n",n-top-1);
}
}

void isempty(){
if(top==-1){
printf("Stack is empty");
}else{
printf("\n Stack has element in it \n");
}
}

void peek(){
if(top==-1){
printf("Stack is empty");
}else{
printf("\nTopmost element is %d\n",stack[top]);
}
}

void display(){
if(top==-1){
printf("Stack is empty");
}else{
printf("\nThe stack is as follows\n\n");
for(int p=top;p>=0;p--){
printf("\n%d\n",stack[p]);
}
}
}

int main(){
int i=0;
while(1){

printf("\n\n\nChoose any one option\n!.push elements to stack\n2.pop elemets out\n3.peek the top\n4.check if stack is full\n5.check if stack is empty\n6.Display Stack\n");
scanf("%d",&i);
switch(i){
case 1:push();
break;
case 2:pop();
break;
case 3:peek();
break;
case 4:isfull();
break;
case 5: isempty();
break;
case 6: display();
break;
default : printf("\n Wrong selection"); 
}
}
return  0;
}
