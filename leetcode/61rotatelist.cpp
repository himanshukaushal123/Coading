/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       ListNode* temp=head;
        
        //edge case
        if(!head ||!head->next ||k==0) return head;
        
        int count=1;
        //To eveluate length
            while(temp->next!=NULL&&++count){
                temp=temp->next;
            }
        //to making cyclic
        temp->next=head;
        k=k%count;
        int move=count-k;
        while(move--){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};
