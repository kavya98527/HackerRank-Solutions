// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
SinglyLinkedListNode *tmp = new SinglyLinkedListNode(data);
    tmp->data = data;
    //tmp->next = NULL;
    
    SinglyLinkedListNode *temp = head;
    if(head==NULL)
    {
        head = tmp;
        return tmp;
    }
    else
    {
        for(int i=0; i<position-1; i++)
        {
            if(temp->next!=NULL){
            temp = temp->next;}
        }
        tmp->next = temp->next;
        temp->next = tmp;
        
        return head;
    }

}