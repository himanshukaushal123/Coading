class Solution {
public:
    bool buddyStrings(string s, string goal) {
        vector<int>vec;
        //Boundary
      if(s.size()!=goal.size())
          return false;
        //Special Case(s="aa",goal="aa")
        if(s==goal && set<char>(s.begin(),s.end()).size()<s.size()) return true;
      for(int i=0;i<s.size();i++)
      {
         if(s[i]!=goal[i])
         {
             vec.push_back(i);
             if(vec.size()>2)
                 return false;
         }
      }
      if(vec.size()==2)
      {
        if(s[vec[0]]==goal[vec[1]]&&goal[vec[0]]==s[vec[1]])
          return true;
      }
      return false;
    }
       
};
