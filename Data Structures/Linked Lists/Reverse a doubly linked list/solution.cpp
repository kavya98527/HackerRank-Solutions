// Complete the reverse function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
DoublyLinkedListNode *temp = NULL;
    DoublyLinkedListNode *current = head;
    //We just swapped the prev and next of all the nodes 
    while(current!=NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    //Before changing head, check for the cases like empty list and list with only one node
     if(temp != NULL ) 
        head = temp->prev;
    return head;
}