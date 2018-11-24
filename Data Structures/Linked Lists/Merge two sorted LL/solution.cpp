

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
  SinglyLinkedListNode *temp1 = head1;
  //SinglyLinkedListNode *temp2 = head2;
  while(temp1->next!=NULL){
      temp1=temp1->next;
  }
  temp1->next = head2;
  //return head1;
  SinglyLinkedListNode *i, *j;
  int temp;
  for(i=head1; i->next!=NULL; i=i->next){
      for(j=i->next; j!=NULL; j=j->next){
          if(i->data > j->data){
              temp = i->data;
              i->data = j->data;
              j->data = temp;
          }
      }
  }
  return head1;
}

