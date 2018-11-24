

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
if(head == NULL){return false;}
SinglyLinkedListNode *fast = head->next;
SinglyLinkedListNode *slow = head;
while(fast != NULL && fast->next != NULL && slow != NULL){
    if(fast == slow)
    {
        return true;
    }
    fast = fast->next->next;
    slow = slow->next;
}
return false;

}

