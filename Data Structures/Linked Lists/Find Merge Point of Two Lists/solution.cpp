

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode *current1 = head1;
    SinglyLinkedListNode *current2 = head2;

    //Do till the two nodes are the same
    while(current1 != current2){
        //If you reached the end of one list start at the beginning of the other one
        //currentA
        if(current1->next == NULL){
            current1 = head2;
        }else{
            current1 = current1->next;
        }
        //currentB
        if(current2->next == NULL){
            current2 = head1;
        }else{
            current2 = current2->next;
        }
    }
    return current2->data;
}


