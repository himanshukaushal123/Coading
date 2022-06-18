int start=0;
Node *solve(string s){
  if(start>=s.size()){
    return NULL;
  }
  bool neg=0;
  if(s[strat]=="-"){
    neg=1;
    start++;
  }
  int num=0;
  while(start<s.size()&&s[i]>='0'&&s[i]<='9'){
    int digit=s[i];
    num=num*10+digit;
    start++;
  }
  
  if(neg)num=-num;
  Node* root=new Node(num);
  
  if(start>=s.size())return root;
  
  if(start<s.size()&& s[start]=='('){
    start++;
    root->left=solve(s);
  }
  
  if(start<s.size()&&s[i]==')'){
    start++;
    return root;
  }
  return root;
}
