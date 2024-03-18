ListNode *detectCycle(ListNode *head)
{
    ListNode *p, *q;
    bool detection;
    p = head;
    q = head;

    if (head == NULL)
        detection = false;

    while (1){
        if (q->next != NULL){
            p = p->next;
            q = q->next->next;

            if (q == NULL){
                detection = false;
                break;
            }

            if (q == p){
                detection = true;
                break;
            }
        }
        
        else{
            detection = false;
            break;
        }
    }

    if (detection){
        q = head;
        
        while (1){
            q = q->next;
            p = p->next;
            
            if (p == q)
                return p;
        }
    }
    
    else
        return NULL;
}