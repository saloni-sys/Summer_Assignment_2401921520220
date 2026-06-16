
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        

        int count=0;
        ListNode*temp=head;

        while(temp!=NULL){
            count++;
            temp=temp->next;
        }

        int pos=count-n+1;
        if(pos == 1)
{
    ListNode* del = head;
    head = head->next;
    delete del;
    return head;
}
        temp=head;

        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }

        ListNode*del=temp->next;
        temp->next=temp->next->next;
        delete del;

        return head;
        
    }
};
