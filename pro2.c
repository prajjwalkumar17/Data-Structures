//PROGRAM CODE:
#include<stdio.h>
#include<stdlib.h>


void create_array(char a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf(" %c", &a[i]);
	}
	/*for(i=0;i<n;i++)
	{
		printf("%d", &a[i]);
	}*/

}

void display_array(char a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%c\t",a[i]);
		printf("The index : %d  has element  : %c       and its address is : %p\n",i,a[i],&a[i]);
		
		
	
		
		
	
	}
}

int insert_at_pos(int item,char a[],int n,int pos)
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

int delete_at_pos(char a[], int n,int pos)
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
}

int main()
{
	int choice,n,item, pos;
	char a[20];
	while(1)
	{
		printf("\n.......Menu......\n");
		printf(" 1.create an array of characters \n  2.display\n 3.Insert at position\n 4.Delete at position\n 5. exit\n");
		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the number of elements\n");
				scanf("%d",&n);
				printf("enter %d elements\n",n);
				create_array(a,n);
				break;
			case 2: printf("the contents of the array are\n");
				display_array(a,n);
				break;
			case 3: printf("enter the item to be inserted\n");
				scanf("%d",&item);
				printf("enter the position\n");
				scanf("%d",&pos);
				n=insert_at_pos(item,a,n,pos);
				break;
			case 4: printf("enter the position\n");
				scanf("%d",&pos);
				n=delete_at_pos(a,n,pos);
				break;
			case 5:exit(0);
				break;
			default:printf("invalid choice\n");
				break;
		}
	}
}

