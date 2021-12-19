#include <iostream>


using namespace std;

class Books
{
     private:
            struct Node
            {
                int id;
                string name,author;
                Node *next_addr;
            };
    public:
          Node *head=NULL;
          void operations();
          void insert();
          void search();
          void del();
          void show();
          
          
};
       void Books::operations()
 {    p:
      int choice;
      cout<<"\n\n\t\t BOOK MANAGEMENT SYSTEM";
      cout<<"\n\n\t\t--------------";
      cout<<"\n\n 1. Insert book";
      cout<<"\n\n 2. Search book";
      cout<<"\n\n 3. Delete book";
      cout<<"\n\n 4. Show records";
      cout<<"\n\n 5. Exit";
      cout<<"\n\n Enter your choice";
      cin>>choice;
      switch(choice)
      {
          case 1:
                insert();
                 break;
          case 2:
                search();
                break;
          case 3:
                del();
                break;
          case 4:
                show();
                break;
          case 5:
                exit(0);
         default:
               cout<<"\n\n Entered choice is invalid";
      }
      
      goto p;
      
 }
 
  void Books::insert()
  {
      cout<<"\n\t\tBOOK MANAGEMENT SYSTEM";
      Node *new_node=new Node;
      cout<<"\n\n enter the book ID:";
      cin>>new_node ->id;
      cout<<"\n\n enter the book name:";
      cin>>new_node -> name;
      cout<<"\n\n author name";
      cin>>new_node -> author;
      new_node -> next_addr= NULL;
      if(head==NULL)
      {
          head = new_node;
      }      
          
      else
       {
           Node *ptr= head;
           while(ptr-> next_addr!=NULL)
           { 
               ptr= ptr-> next_addr;
           }
           ptr = new_node;
       }
       cout<<"\n\n\t\t book is inserted successfully...";
       
      
      
 }
   void Books::search()
   {    
        int u_id, count=0;
        cout<<"\n\t\tBOOK MANAGEMENT SYSTEM";
        if(head==NULL)
        {
            cout<<"\n LIST IS EMPTY..";
            
        }
        else
        {
            cout<<"\n\n enter the book id you want to search";
            cin>>u_id;
            Node *ptr= head;
            while(ptr!=NULL)
            {
                if(u_id==ptr->id)
                {   
                    cout<<"\n\t\tBOOK MANAGEMENT SYSTEM";
                    cout<<"\n\n BOOK ID:"<<ptr->id;
                    cout<<"\n\n BOOK NAME:"<<ptr->name;
                    cout<<"\n\n AUTHOR NAEM:"<<ptr->author;
                    count++;
                }
                ptr=ptr->next_addr;
            }
            if(count==0)
            {
                cout<<"\n\n\t\t BOOK ID NOT FOUND";
                
            }
        }
   }
   void Books:: del()
   {    
        int u_id, count=0;
        cout<<"\n\t\t BOOK MANAGEMENT SYSTEM";
        if(head==NULL)
        {
            cout<<"\n LIST IS EMPTY..";
            
        }
        else
        {
            cout<<"\n\n enter the book if you want to search";
            cin>>u_id;
            if(u_id==head->id)
            {
                Node *ptr=head;
                head=head->next_addr;
                delete ptr;
                cout<<"\n\n BOOK IS DELETED SUCCESSFULLY...";
                count++;
            }
            else
            {
                Node *pre=head;
                Node *ptr=head;
                while(ptr!=NULL)
                {
                    if(u_id==ptr->id)
                    {
                        pre-> next_addr=ptr-> next_addr;
                       delete ptr;
                     cout<<"\n\n BOOK IS DELETED SUCCESSFULLY";
                     count++;
                     break;
                        
                        
                    }
                    pre=ptr;
                    ptr= ptr->next_addr;
                }
            }
            if(count==0)
            {
                cout<<"\n\n BOOK ID IS NOT FOUND";
            }
            
           
        }
       
   }
   
   void Books::show()
   {
        
        cout<<"\n\t\tBOOK MANAGEMENT SYSTEM";
        
            
            
            Node *ptr= head;
            while(ptr!=NULL)
            {
                
                  
                    cout<<"\n\t\tBOOK MANAGEMENT SYSTEM";
                    cout<<"\n\n BOOK ID:"<<ptr->id;
                    cout<<"\n\n BOOK NAME:"<<ptr->name;
                    cout<<"\n\n AUTHOR NAEM:"<<ptr->author;
                    cout<<"\n\n-----------------";
                
                   ptr=ptr->next_addr;
            }
            
       
         
   
   }
 
  int main()
 {
     Books obj;
     obj.operations();
 }
     
     
     
       
       