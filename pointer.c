#include <stdio.h>
int main(){
int a;
int *ptr=&a;
int *ptr1=&ptr;
printf("Enter a no.....\n");
scanf("%d",&a);
//printf("The entered no is...... %d\n",a);
printf("the address of a is %p\n",ptr);
printf("the address of a is %p\n",&a);

printf("the value of a is %d\n",*ptr);
printf("the value of a is %d\n",a);

printf("the address of ptr is %p\n",&ptr);
printf("the address of ptr is %p\n",ptr1);

//printf("the address of a is %d\n",ptr1);
}
