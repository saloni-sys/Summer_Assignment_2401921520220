class Solution{

public:

ListNode*reverse_ll(ListNode*head){

ListNode* prev=NULL;
LisNode* next=NULL;
ListNode* curr=heead;
while(curr!=NULL){
ListNode*next=curr->next;
curr->next=prev;
prev=curr;
curr=next;
}
return prev;
}

};
