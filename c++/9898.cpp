int sum(ListNode *head)
{
     int cem= 0;

     ListNode *pointer;
     pointer = head;

     while (pointer != NULL)
     {
         cem+= pointer->val;
         pointer = pointer->next;
     }

     return cem;
}