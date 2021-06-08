Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    struct Node* start;
     struct Node* answer;
     answer=(struct Node*)malloc(sizeof(struct Node));
     answer->data=0;
     answer->next=NULL;
    
    start=answer;
   
    
  
    
    
    
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data<head2->data)
        {
            struct Node* temp;
            temp=(struct Node*)malloc(sizeof(struct Node));
            temp->data=head1->data;
            temp->next=NULL;
            
            answer->next=temp;
            
            answer=answer->next;
            
            head1=head1->next;
            
        }
        else
        {
          struct Node* temp;
            temp=(struct Node*)malloc(sizeof(struct Node));
            temp->data=head2->data;
            temp->next=NULL;
            
            answer->next=temp;
            answer=answer->next;
            
            head2=head2->next;
        }
    }
    
    while(head1!=NULL)
    {
         struct Node* temp;
            temp=(struct Node*)malloc(sizeof(struct Node));
            temp->data=head1->data;
            temp->next=NULL;
            
            answer->next=temp;
            
            answer=answer->next;
            
            head1=head1->next;
    }
    
    while(head2!=NULL)
    {
        struct Node* temp;
            temp=(struct Node*)malloc(sizeof(struct Node));
            temp->data=head2->data;
            temp->next=NULL;
            
            answer->next=temp;
            answer=answer->next;
            
            head2=head2->next;
    }
    
    
    return start->next;
    
    
    
    
}  