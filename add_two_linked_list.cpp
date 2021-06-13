class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    struct Node* reverse(struct Node* start)
    {
        struct Node* current=start;
        struct Node* prev=NULL;
        struct Node* next=NULL;
        
        while(current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        
        
        
        return prev;
    }
    
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        
        //first do the reversing of the linked list 
        
        struct Node* num1=reverse(first);
        struct Node* num2=reverse(second);
        int carry=0;
        
        struct Node* answer;
        answer=(struct Node*)malloc(sizeof(struct Node));
        
        struct Node* final;
        final = answer;
        
        answer->data=999;
        answer->next=NULL;
        
        while(num1!=NULL && num2!=NULL)
        {
            int n1=num1->data;
            int n2=num2->data;
            int add= n1+n2;
            
            struct Node* temp;
            temp=(struct Node*)malloc(sizeof(struct Node));
            
            if(add+carry<10)
            {
                
                temp->data=add+carry;
                temp->next=NULL;
                carry=0;
                answer->next=temp;
                answer=answer->next;
                
            }
            else
            {
                
                int val = (add+carry)%10;
                temp->data=val;
                temp->next=NULL;
                answer->next=temp;
                answer=answer->next;
                carry=1;
                
            }
            num1=num1->next;
            num2=num2->next;
            
        }
        
        while(num1!=NULL)
        {
            struct Node* temp;
            temp=(struct Node*)malloc(sizeof(struct Node));
            
            if(carry==1)
            {
                if(num1->data==9)
                {
                    temp->data=0;
                    temp->next=NULL;
                    answer->next=temp;
                    answer=answer->next;
                    carry=1;
                }
                else
                {
                temp->data=num1->data+ carry;
                temp->next=NULL;
                answer->next=temp;
                answer=answer->next;
                carry=0;
                }
            }
            else
            {
                temp->data=num1->data;
                temp->next=NULL;
                answer->next=temp;
                answer=answer->next;
            
            }
            num1=num1->next;
            
        }
        
        
        
        while(num2!=NULL)
        {
            struct Node* temp;
            temp=(struct Node*)malloc(sizeof(struct Node));
            
            if(carry==1)
            {
                if(num2->data==9)
                {
                    temp->data=0;
                    temp->next=NULL;
                    answer->next=temp;
                    answer=answer->next;
                    carry=1;
                }
                else
                {
                temp->data=num2->data+ carry;
                temp->next=NULL;
                answer->next=temp;
                answer=answer->next;
                carry=0;
                }
            }
            else
            {
                temp->data=num2->data;
                temp->next=NULL;
                answer->next=temp;
                answer=answer->next;
            
            }
            num2=num2->next;
            
        }
        if(carry==1)
        {
             struct Node* temp;
            temp=(struct Node*)malloc(sizeof(struct Node));
            
            temp->data=1;
            temp->next=NULL;
            answer->next=temp;
            answer=answer->next;
            
        }
        
        
        struct Node* done= reverse(final->next);
        
        return done;
        
    }
};