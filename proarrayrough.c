//PROGRAM CODE:
#include<stdio.h>
#include<stdlib.h>
int n,a[100];
int *ptr;

void create_array(){
	printf("Enter the no of elements of the array\n");
	scanf("%d",&n);
	printf("Enter those elements of the array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
}

void display_array()
{
	for(int i=0;i<n;i++)   //a[0]    a[1]   a[2]
	{
	//*ptr=a[i];
	printf("the elements of the array at position %d is %d and its address is %p  \n",  i,    a[i],    &a[i] );
	}
}

/*
int insert_at_pos(int item,int a[],int n,int pos)
{
	int i;
	if(pos>n||pos<0)
	{
		printf("invalid position\n");
		return n;
	}

	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];			// 1 3 4 5(0,1,2,3,4)
	}
	a[pos]=item;
	return n+1;
}


int delete_at_pos()
{
	int i;
	if(pos>=n||pos<0)
	{
		printf("Invalid position\n");
		return n;
	}
	printf("item deleted is %d\n",a[pos]);
	for(i=pos+1;i<n;i++)
	{
		a[i-1]=a[i];
	}
	return n-1;
}*/

int main()
{
	int choice;
	while(1)
	{
		printf("\n.......Menu......\n");
		printf("1.create an array\n 2.display\n 3.Insert at position\n 4.Delete at position\n 5. exit\n");
		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create_array();
	      		break;
			case 2: display_array();
			break;
		/*	case 3: insert_at_pos();
				break;
			case 4: delete_at_pos();
				break;*/
			case 5:exit(0);
				break;
			default:printf("invalid choice\n");
				break;
		}
	}
}

