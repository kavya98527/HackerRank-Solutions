SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode *head,int data)
{
   SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
   newNode->data = data;
   newNode->next = NULL; 
   
    SinglyLinkedListNode* temp = head;
    if(head==NULL)
    {
        head = newNode;
        return head;
        //tail = newNode;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next = newNode;
        return head;
    }
}