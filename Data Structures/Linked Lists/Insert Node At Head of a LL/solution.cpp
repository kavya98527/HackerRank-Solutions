// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) {
SinglyLinkedListNode *tmp = new SinglyLinkedListNode(data);
    if(head==NULL)
    {
        head= tmp;
        return tmp;
    }
    else{
    tmp->data = data;
    tmp->next = head;
        head = tmp;
        
        return tmp;
    }

}