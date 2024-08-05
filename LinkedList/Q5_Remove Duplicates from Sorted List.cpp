
// ------------Optimal soluction---------
ListNode* deleteDuplicates(ListNode* head) {
         if (head == nullptr || head->next == nullptr) {
            return head;
        }

    
        ListNode* prev=head;
        ListNode* curr=head->next;
        while(curr!=nullptr){
            if(curr->val==prev->val){
               curr=curr->next;
               continue;
            }
            else{
                prev->next=curr;
                prev=curr;
                curr=curr->next;
            }


        }
        prev->next=nullptr;
        return head;

        
    }
