// Complete the reversePrint function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void reversePrint(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *p = NULL;
    SinglyLinkedListNode *c = head;
    SinglyLinkedListNode *n;
    
    
    if(head == NULL)
    {
        return;
    }
    else
    {
        while(c!=NULL)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        head = p;
    }
    SinglyLinkedListNode *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }

}