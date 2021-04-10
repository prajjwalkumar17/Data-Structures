#include<stdio.h>
int main(){
int arr[]={1,4,5,6,7,0};
printf("the add of third element is %d \n",&arr[2]);
printf("the add of third element is %d \n",arr + 2);
printf("the add of fifth element is %d \n",&arr[4]);
printf("the add of fifth element is %d \n\n",arr+4);


printf("the value of third element is %d \n",*(&arr[2]));
printf("the value of third element is %d \n",*(arr + 2));
printf("the value of third element is %d \n",arr[2]);
printf("the value of third element is %d \n",*(&arr[4]));
printf("the value of third element is %d \n",*(arr + 4));
printf("the value of third element is %d \n",arr[4]);


}
