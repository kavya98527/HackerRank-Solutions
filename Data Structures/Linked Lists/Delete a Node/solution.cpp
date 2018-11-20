// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
SinglyLinkedListNode *temp1 = head;
    if(position == 0)
    {
        head = temp1->next;
        free(temp1);
        return head;
    }
    for(int i=0; i<position-1; i++)
    {
        temp1 = temp1->next;
    }
    SinglyLinkedListNode *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
    return head;

}