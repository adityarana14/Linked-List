int getMiddle(Node *head)
{
   // Your code here
   
   // finding middle element in the linked list.
   
   struct Node* start;
   struct Node* helper;
   start = head;
   helper = head;
   
   while(helper->next!=NULL && helper->next->next!=NULL)
   {
       start = start->next;
       helper = helper->next->next;
   }

if(helper->next!=NULL)
    return start->next->data;
else
   return start->data;

   
}