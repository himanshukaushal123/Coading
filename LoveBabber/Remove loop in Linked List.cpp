 void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
         Node* slow=head;
        Node* fast=head;
           Node*entry=head;
        Node*pre=NULL;
        int flag=0;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if (slow == fast) {
            slow = head;
            //first node pe dono ho jye to
            if (slow == fast)
                while (fast->next != slow)
                    fast = fast->next;
            else {
                while (slow->next != fast->next) {
                    slow = slow->next;
                    fast = fast->next;
                }
            }
            fast->next = NULL;
        }
        }
    }
