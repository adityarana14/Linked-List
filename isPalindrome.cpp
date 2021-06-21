class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    struct Node* reverse(struct Node* head)
    {
        struct Node* current;
        struct Node* prev;
        struct Node* next;
        
        current = head;
        prev = NULL;
        next = NULL;
        
        
        while(current!=NULL)
        {
         next = current->next;
         current->next= prev;
         prev = current;
         current = next;
        }
        
        
        return prev;
      
    }
    
    
    
    
    bool isPalindrome(Node *head)
    {
        //Your code here
        // palindrome problem a very good problem
        
        struct Node* second;
        second = (struct Node*)malloc(sizeof(struct Node));
        struct Node* secondStart= second;
        second ->data =head->data;
        second->next=NULL;
        
        struct Node* temp=head;
        temp=temp->next;
        while(temp!=NULL)
        {
            struct Node* temp2;
            temp2=(struct Node*)malloc(sizeof(struct Node));
            temp2->data= temp->data;
            temp2->next=NULL;
            
            second->next=temp2;
            second=second->next;
            temp=temp->next;
        }
        
        struct Node* firstFinal= reverse(head);
        
        struct Node* check1;
        struct Node* check2;
        
        check1=firstFinal;
        check2= secondStart;
        
        
        while(check1!=NULL && check2!=NULL)
        {
            if(check1->data != check2->data)
            return 0;
            
            check1=check1->next;
            check2=check2->next;
        
        }
        
        
        return 1;
        
        
        
    }
};