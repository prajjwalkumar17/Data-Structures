#include<stdio.h>
#include<stdlib.h>
int n,v,i,j,f=0,r=-1;
int a[20][20];
int visited[30],q[30];


void create(){
printf("\nEnter no.of cities \n");
scanf("%d",&n);
printf("\nEnter graph data in matrix form \n");
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
scanf("%d",&a[i][j]);
}}}

void bfs(int v){
for(i=1;i<=n;i++){
if(a[v][i] &&  !visited[i]){
q[++r]=i;
}}
if(f<=r){
visited[q[f]]=1;
bfs(q[f++]);
}}

void main(){
int choice;
while(1){
printf("\n.............................Graph menu.......................\n\n");
printf("\n1.Create a digraph for n cities\n2.BFS traversal\n3.Exit\n\n");
printf("\nEnter your choice....\n");
scanf("%d",&choice);
switch(choice){

case 1:create();
break;

case 2:
printf("\nEnter source vertex....\n");
scanf("%d",&v);
if(v<1 || v>n){
printf("\nEnter a valid source....\n");}
else{
for(int i=1;i<=n;i++){
visited[i]=0;
}visited[v]=1;
bfs(v);
printf("\nThe reachable node from %d :\n",v);
for(i=1;i<=n;i++)
{
if( visited[i]  &&  i != v){
printf("\nnode %d\n",i);}}}
break;

case 3 : exit(0);
break;

default : printf("\nInvalid choice....\n");
break;
}}}



