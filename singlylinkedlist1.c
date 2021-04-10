#include<stdio.h>
#include<stdlib.h>  
int MAX=4, count; 
struct student
{
    char usn[10];
    char name[30];
    char branch[5];
    int sem;
    char phno[10];
    struct student *next; //Self referential pointer.
};
typedef struct student NODE; 
NODE *head;
int countnodes( )
{
    NODE *p; 
    count=0; 
    p=head; 
    while(p!=NULL) 
    {
        p=p->next; 
        count++;
    }
    return count;
}
NODE* getnode(NODE *head) 
{
    NODE *newnode;
    newnode=(NODE*)malloc(sizeof(NODE)); //Create first NODE 
    printf("\nEnter USN, Name, Branch, Sem, Ph.No\n");
    scanf("%s",&(newnode->usn));
    scanf("%s",&(newnode->name));
    scanf("%s",&(newnode->branch));
    scanf("%d ",&(newnode->sem));
    scanf("%s",&(newnode->phno));
    newnode->next=NULL; //Set next to NULL...
    head=newnode;
    return head;
}
void display( ) 
{
    NODE *p;
    if(head == NULL) 
    printf("\nNo student data\n"); 
    else
    {
        p=head;
        printf("\n----STUDENT DATA----\n"); 
        printf("\nADDRESS \t USN\tNAME\tBRANCH\tSEM\tPh.NO."); 
        while(p!=NULL)
        {
            printf("\n %d \t%s\t%s\t%s\t%d\t%s ",p, p->usn, p->name, p->branch, p->sem, p->phno);
            p = p->next; //Go to next node...
        }
    printf("\nThe no. of nodes in list is: %d",countnodes(head)); 
    }
}
void create( ) 
{
    NODE *newnode; 
    if(head==NULL) 
    {
        newnode=getnode(head);
        head=newnode; 
    }
    else 
    {
        newnode=getnode(head); 
        newnode->next=head; 
        head=newnode;
    }
}
void insert_front() 
{
    if(countnodes(head) == MAX) 
        printf("\nList is Full / Overflow!!");
    else
        create( );
}
void insert_rear( ) 
{
    NODE *p, *newnode;
    p=head;
    if(countnodes(head) == MAX) 
    printf("\nList is Full(QUEUE)!!"); 
    else
    {
        if(head == NULL)
        {
            newnode=getnode(head);
            head=newnode; //set first node to be head 
        }
        else
        { 
            newnode=getnode(head); 
            while(p->next!=NULL) 
            {
                p=p->next; 
            }
            p->next=newnode;
        } 
    }
}
void insert() 
{
    int ch; 
    do
    {
        printf("\n1.Insert at Front(First)\t2.Insert at End(Rear/Last)\t3.Exit"); 
        printf("\nEnter your choice: "); 
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert_front(); 
                    break;
            case 2: insert_rear(); 
                    break;
            case 3: break;
        }
        display();
    }while(ch!=3); 
}
void delete_front() 
{
    NODE *p;
    if(head==NULL)
    printf("\nList is Empty/Underflow (STACK/QUEUE)"); 
    else
    {
        p=head;
        head=head->next; //Set 2nd NODE as head free(p);
        printf("\nFront(first)node is deleted");
    }
} 
void delete_rear( ) 
{
    NODE *p, *q; 
    p=head; 
    while(p->next!=NULL) 
    {
        q=p;
        p=p->next; //Go upto -1 NODE which you want to delete 
    }
    free(p);
    q->next=NULL;
    printf("\nLast(end) entry is deleted");
}
void del() 
{
    int ch; 
    do
    {
        printf("\n 1.Delete from Front(First)\t 2. Delete from end(Rear/Last))\t 3.Exit"); 
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: delete_front(); 
                    break;
            case 2: delete_rear();
                    break;
            case 3: break; 
        }
        display();
    }while(ch!=3); 
}
void stack() 
{
    int ch; 
    do
    {
        printf("\n SSL used as Stack...");
        printf("\n 1.Insert at Front(PUSH) \t 2.Delete from Front(POP))\t 3.Exit"); 
        printf("\n Enter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert_front(); 
                    break;
            case 2: delete_front(); 
                    break;
            case 3: break;
        }
        display();
    }while(ch!=3); 
}
void queue() 
{
    int ch; 
    do
    {
        printf("\nSSL used as Queue...");
        printf("\n 1.Insert at Rear(INSERT) \t 2.Delete from Front(DELETE))\t3.Exit"); 
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert_rear(); 
                    break; 
            case 2: delete_front(); 
                    break; 
            case 3: break;
        }
        display();
    }while(ch!=3);
}
int main() 
{
    int ch, i, n;
    head=NULL;
    printf("\n*----------Studednt Database-----------*"); 
    do
    {
        printf("\n 1.Create\n 2.Display\n 3.Insert\n 4.Delete\n 5.Stack\n 6.Queue\n 7.Exit"); 
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nHow many student data you want to create: "); 
                    scanf("%d", &n);
                    for(i=0; i<n; i++)
                        create(); //Call to Create NODE...
                    break;
            case 2: display(); //Call to Display... 
                    break;
            case 3: insert(); //Call to Insert....
                    break;
            case 4: del(); //Call to Delete....
                    break;
            case 5: stack();
                    break;
            case 6: queue(); 
                    break;
            case 7: exit(0); //Exit....
        }
    }while(ch!=7);
}
