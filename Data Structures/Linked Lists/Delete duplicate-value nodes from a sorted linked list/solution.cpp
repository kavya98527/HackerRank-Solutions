// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *current = head;
    SinglyLinkedListNode *next_next;
    //SinglyLinkedListNode* next;
if(head == NULL)
{return NULL;}
    else
    {
        while(current->next!=NULL)
        {
            if(current->data == current->next->data)
            {
                next_next = current->next->next;
                free(current->next);
                current->next = next_next;
            }
            else
            {
                current = current->next;
            }
        }
        return head;
    }

}