// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
//
    SinglyLinkedListNode *p = NULL;
    SinglyLinkedListNode *c = head;
    SinglyLinkedListNode *n;
  
    if(head == NULL)
    {
        return 0;
    }
    else{
    while(c!=NULL){
    n = c->next;
    c-> next = p;
    p = c;
    c = n;
    }
    head=p;
    SinglyLinkedListNode *temp = head;
    for(int i=0; i<=positionFromTail-1; i++)
    {
        //if(temp->next!=NULL)
            temp = temp->next;
    }
    return temp->data;
}
}