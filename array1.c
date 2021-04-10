#include<stdio.h>

int main(){

int a[100] , n;
int *ptr;

printf("Enter no of elements of the array\n");
scanf("%d",&n);

printf("Enter those elements of the array\n");
for(int i=0 ;    i<n;    i++)
{
scanf("%d",&a[i]);
}

printf("The elements of the aray are as follows :\n");
for(int i=0; i<n; i++)
{
printf("%d \n",a[i]);
}

printf("The address elements of the aray are as follows :\n");
for(int i=0; i<n; i++){
printf("%d\n",&a[i]);
}
}
