class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head==NULL)
        return NULL;
        struct Node* current=head;
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
    
};