class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* reverse(Node*root){
        Node*newnode=NULL;
        while(root!=NULL){
            Node* nex=root->next;
            root->next=newnode;
            newnode=root;
            root=nex;
        }
        return newnode;
    }
    Node* findmid(Node*head){
        Node* fast=head;
        Node* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
       Node *mid=findmid(head);
       Node *start=reverse(mid);
       while(head!=mid){
        if(head->data!=start->data)return false;
        head=head->next;
        start=start->next;
        }
        return true;
    }
};
