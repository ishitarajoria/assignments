

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
  char book[300];
  struct node *next;

}s1;

s1 *hashtable[1000];
int hashtablesize=20;

int conversion_to_key(char book[])
{
   int count, sum=0;
   for(int i=0;i<strlen(book);i++)
       { 
          count=book[i];
          sum=count+sum;
       }
        return sum;

}

void addnode()
{
   int ascii, key;
   s1 *n, *t;
   printf("adding the book\n");
   n=(s1 *)malloc(sizeof(s1));
   printf("book name:");
   scanf("%s",n->book);
   n->next=NULL;
  
   ascii= conversion_to_key(n->book);
   key=ascii % hashtablesize;
   if(hashtable[key]==NULL)  
   {
     hashtable[key]=n;

   }
   
   else
   {
     for(t=hashtable[key]; t->next!=NULL; t=t->next);
     t->next=n;
   }

}


int search_book(char nbook[])
{
   int ascii=conversion_to_key(nbook);
   int key= ascii % hashtablesize;
   s1 *n;
   for(n=hashtable[key];n!=NULL; n=n->next)
   {
       if(strcmp(n->book,nbook)==0)
        {  
           return key;
         }
   }
   return -1;


}

void print_list(s1 *n)
{
   s1 *t;
   for(t=n;t!=NULL; t=t->next)
   {
      printf("[%s]",t->book);
    
   }
}

void print_hashtable()
{   int i;
   for( i=0;i<hashtablesize;i++)
    {  
      printf("\n hashtable[%d]:",i);
      print_list(hashtable[i]);
    }  
   
}


int main()
{
      
      char nbook[300];
      int key, choice;
      do{
      printf("\n\n\t\t BOOK MANAGEMENT SYSTEM USING HASHMAP");
      
      printf("\n\n 1. Insert book");
      printf("\n\n 2. Search book");
     
      printf("\n\n 3. Show list");
      printf("\n\n 4. Exit");
      printf("\n\n Enter your choice");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:
                 addnode();
                 break;
          case 2:
                printf("book name:");
                scanf("%s",nbook);
                key=search_book(nbook);
                if(key==-1)
                {
                    printf("book doesn't exsist\n");
           
                 }
                else
                 {
                      printf("book exsist in:\n");
                      printf("\n hashtable[%d]:",key);
                      print_list(hashtable[key]);
                 }
                
                break;
          case 3:

                print_hashtable();
               
         
                break;
          case 4:
                exit(0);
         default:
               printf("\n\n Entered choice is invalid");
      }
      
   
      
      }
      while(choice<5);


}
