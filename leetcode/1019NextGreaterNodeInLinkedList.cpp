class Solution {
public:
   vector<int> nextLargerNodes(ListNode* head) {
  vector<int> res, stack;
  for (auto p = head; p != nullptr; p = p->next) res.push_back(p->val);
  for (int i = res.size() - 1; i >= 0; --i) {
    auto val = res[i];
    while (!stack.empty() && stack.back() <= res[i]) stack.pop_back();
    res[i] = stack.empty() ? 0 : stack.back();
    stack.push_back(val);
  }
  return res;
}
};
//second way
vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        stack<pair<int,int>> s;
        int i=0;
        while(head){
            while(!s.empty() && s.top().first<head->val){
                int idx=s.top().second;
                s.pop();
                ans[idx]=head->val;
            }
            s.push({head->val,i++});
            head=head->next;
            ans.push_back(0);
        }
        return ans;
    }
};
