string reverseWord(string str){
    
  //Your code here
  int i=0;
  int j=str.size()-1;
  while(i<=j){
      swap(str[i],str[j]);
      i++;
      j--;
  }
  return str;
}
