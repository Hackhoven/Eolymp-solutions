ListNode* merge(ListNode *node1, ListNode *node2)
{
    ListNode *result = new ListNode(0);
    ListNode *pointer = new ListNode(0);
    pointer = result;

    while (node1 && node2){
        if (node1->val < node2->val){
            pointer->next = new ListNode(node1->val);
            node1 = node1->next;
        }
        
        else{
            pointer->next = new ListNode(node2->val);
            node2 = node2->next;
        }
        
        pointer = pointer->next;
    }

    while (node1){
        pointer->next = new ListNode(node1->val);
        node1 = node1->next;
        pointer = pointer->next;
    }

    while (node2){
        pointer->next = new ListNode(node2->val);
        node2 = node2->next;
        pointer = pointer->next;
    }

    return result->next;
}