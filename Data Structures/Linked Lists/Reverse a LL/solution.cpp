// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *p = NULL;
    SinglyLinkedListNode *c = head;
    SinglyLinkedListNode *n;


    if(head == NULL)
    {
        return head;
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
        return p;
    }
}