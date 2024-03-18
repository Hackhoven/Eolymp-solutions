ListNode *intersection(ListNode *node1, ListNode *node2)
{
    if (node1 == NULL || node2 == NULL)
        return NULL;

    while (node1){
        for (ListNode *node = node2; node != NULL; node = node->next){
            if (node1 == node)
                return node;
        }
        
        node1 = node1->next;
    }

    return NULL;
}