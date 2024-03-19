int length(ListNode *head){

    int length = 0;

    ListNode *pointer;
    pointer = head;

    while (pointer != NULL)
    {
        length++;
        pointer = pointer->next;
    }

    return length;
}