class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>vec;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+"){
                int sum=0;
                auto it=vec.end();
                it--;
                sum=sum+*it;
                it--;
                sum=sum+*it;
                vec.push_back(sum);
            }
            else if(ops[i]=="C"){
                vec.erase(vec.end()-1);
            }
            else if(ops[i]=="D"){
                auto it=vec.end();
                it--;
                vec.push_back(2*(*it));
            }
            else
            {
                vec.push_back(stoi(ops[i]));
            }
        }
        int sum=0;
        for(auto x:vec){
            sum=sum+x;
        }
        return sum;
    }
};
