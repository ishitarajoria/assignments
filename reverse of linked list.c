 #include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;                   
    struct node *next;       
}*head;

void createNodeList(int n);     
void reverseDispList();         
void displayList();             

int main()
{  int n;
		printf("\n\n reverse of linked list :\n");
		printf("------------------------------------------------------------------------------\n");
		
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    
    createNodeList(n);
    printf("\n Data entered in the list are : \n");		
    displayList();
    reverseDispList();
    printf("\n The list in reverse order is :  \n");
    displayList();
    return 0;
}

void createNodeList(int n)
{
    struct node *newnode, *temp;
    head=0;
    int i;
   
    for(i=0;i<n;i++)
   {
   newnode=(struct node *)malloc(sizeof(struct node));
   printf("enter data");
   scanf("%d", &newnode->data);
   newnode->next=0;
    
   if(head==0)
   {
      head=temp=newnode; }
   else
   {
     temp->next=newnode;
     temp=newnode;     }
   

}


}
    


void reverseDispList()
{
    struct node *prevnode, *currentnode;
 
    if(head != NULL)
    {
        prevnode = head;
        currentnode = head->next;
        head = head->next;
 
        prevnode->next = NULL; 
 
        while(head != NULL)
        {
            head = head->next;
            currentnode->next = prevnode;
 
            prevnode = currentnode;
            currentnode = head;
        }
        head = prevnode; 
    }
}


void displayList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf(" No data found in the list.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf(" Data = %d\n", temp->data);   
            temp = temp->next;                 
        }
    }
}
