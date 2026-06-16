Solution class{

  public:

  ListNode* middle_of_ll(ListNode*head){
  ListNode*slow=head;
  ListNode*fast=head;
  while(Fast!=NULL&&Fast-next!=NULL){

  slow=slow-next; 
  fast=fast->next->next;
    
  }
  return slow;
  
  }
  
  
};
