#include<stdio.h>

int main()
{
int a[50],size,i,pos;
printf("Enter size of an array\n");
scanf("%d",&size);
printf("Enter element in array:\n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("The elements in array are:\n");
for(i=0;i<size;i++)
{
printf("%d\n",a[i]);
}
printf("\nenter the position at which you want the data to be deleted\n");
scanf("%d",&pos);
if(pos<=0 || pos>size)
{
printf("invalid position");
}

else
{
a[pos]=0;
}
printf("The elements in array after deletion are:\n");
for(i=0;i<size;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
