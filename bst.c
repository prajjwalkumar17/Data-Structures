#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node * lchild;
struct node * rchild;
}node;
node * root=NULL;
node * newnodee;

node * createbyask(){
node * tempo;
tempo=(node *)malloc(sizeof(node));
printf("\nEnter data...\n");
scanf("%d",&tempo->data);
tempo->lchild=NULL;
tempo->rchild=NULL;
return tempo;
} 


node * create(int value){
node * temp;
temp=(node *)malloc(sizeof(node));
temp->data=value;
temp->lchild=NULL;
temp->rchild=NULL;
return temp;
}
/*
void insertt(node * root,node * newnode){
if(root==NULL){
root=createbyask();
}
if(root->data>newnode->data){
 if(root->lchild==NULL)
{root->rchild=createbyask();}
 else {insertt(root->rchild,newnode);}
}
else if(root->data<newnode->data){
if(root->rchild==NULL)
{root->rchild=createbyask();}
else{insertt(root->rchild,newnode);}
}}
*/




void insert(node * root, int value){
if(root==NULL){
root=create(value);
}
if(root->data>value){
 if(root->lchild==NULL)
{root->lchild=create(value);}
 else {insert(root->lchild,value);}
}
else if(root->data<value){
if(root->rchild==NULL)
{root->rchild=create(value);}
else{insert(root->rchild,value);}
}}

//search

node * search(node * root,int valuee){
if(root==NULL){printf("\nTree is empty nothing to show...\n");}
else{printf("\nThe key element is present in the Tree\n");
if(root->data==valuee){return root;}
else if(root->data>valuee){return search(root->lchild,valuee);}
else if(root->data<valuee){return search(root->rchild,valuee);}}}

//Traversals

void preorder(node * root){
if(root!=NULL){
printf("%d",root->data);
preorder(root->lchild);
preorder(root->rchild);
}}

void inorder(node * root){
if(root!=NULL){
inorder(root->lchild);
printf("%d",root->data);
inorder(root->rchild);
}}

void postorder(node * root){
if(root!=NULL){
postorder(root->lchild);
postorder(root->rchild);
printf("%d",root->data);
}}

int main(){
int n ,no,u,valuee;
while(1){
printf("\n.............................BST menu.......................\n\n");
printf("\n1.Create a BST\n2.Search for elements\n3.Traverse\n4.Exit\n\n");
printf("\nEnter your choice....\n");
scanf("%d",&n);
switch(n){

case 1:
newnodee=NULL;
root=NULL;
 printf("\nEnter the no.of elements\n");
scanf("%d",&no);
for(int r=1;r<=no;r++){
newnodee=createbyask();
if(root==NULL){root=newnodee;}
else{insert(root,newnodee->data);}}
break;

case 2:printf("\nEnter data to be searched....\n");
scanf("%d",&valuee); 
search(root,valuee);
break;

case 3: if(root==NULL){printf("\nNothing to show tree is empty.....\n");}
else{
printf("\nPreorder Traversal\n");
preorder(root);
printf("\nInorder Traversal\n");
inorder(root);
printf("\nPostorder Traversal\n");
postorder(root);
}
break;

case 4: exit(0);
break;
default : printf("\nInvalid Selection......\n");
break;
}}
return 0;

}

