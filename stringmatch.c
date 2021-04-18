#include<stdio.h>
char str[100],pat[50],rep[50],ans[100];


int Strmatch(){
int i,j,c,m,k,flag=0;
while(str[c]!='\0'){
if(str[m]==pat[i]){
i++;
m++;
if(pat[i]=='\0'){
flag=1;
k=0;
while(rep[k] !='\0'){
ans[j++]=rep[k++];}
i=0;
c=m;}
}
else{
ans[j++]=str[c++];
m=c;
i=0;
}
}
ans[j]='\0';
return flag;
}

int main(){
printf("\nEnter a main string\n");
gets(str);
printf("\nEnter a pattern string\n");
gets(pat);
printf("\nEnter a replace string\n");
gets(rep);
int po=Strmatch();
if(po==1){
printf("\nThe resultant string is :%s",ans);
}
else{
printf("\nPattern not found\n");
}
return 0;
}

