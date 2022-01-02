



#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;                    
    struct node *next;       
};
struct node *head;

void createNodeList(int n);     

void delete_kth_node();         
void displayList();             

int main()
{
    int n, posi;
		printf("\n\n Linked List : Deletion of kth node from a list :\n");
		printf("------------------------------------------------------------------------------\n");
		
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
   
    printf(" Input the node to be deleted : ");
    scanf("%d", &posi);
    delete_kth_node(posi);
    
    printf("\n Data after deletion of kth node are : \n");		
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

    


    

void delete_kth_node(int posi)
{
  struct node *nextnode, *temp;
  int pos, i=1;
  temp = head;
  
  
  while(i<posi-1)
  {
    
   
    temp=temp->next;
    i++;
    }
   nextnode=temp->next;
   temp->next=nextnode->next;
     free(nextnode);
  
     
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