class Solution {
public:
 ListNode* cycle_in_ll(ListNode*head){
   
ListNode* slow = head;
ListNode* fast = head;

while (fast != NULL && fast->next != NULL)
{
    slow = slow->next;
    fast = fast->next->next;


   if(slow==fast){

return true;
   }
 }
    return false;
    }
};
