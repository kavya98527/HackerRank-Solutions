

// Complete the sortedInsert function below.

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
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
  DoublyLinkedListNode *nn = new DoublyLinkedListNode(data);
  if(head == NULL)
  {
      return NULL;
  }
  DoublyLinkedListNode *temp = head;
  while(temp->next!=NULL)
  {temp=temp->next;}
  temp->next=nn;
  DoublyLinkedListNode *i, *j;
  int temp1;
  for(i=head; i->next!=NULL; i=i->next){
      for(j=i->next; j!=NULL; j=j->next){
          if(i->data > j->data){
              temp1 = i->data;
              i->data = j->data;
              j->data = temp1;
          }
      }
  }
  return head;
}

