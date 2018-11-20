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
    SinglyLinkedListNode *temp =head; 
if(position==0)
{
    return head->next;
}
    else
    {
        temp->next = deleteNode(temp->next,position-1);
        return head;
    }
}