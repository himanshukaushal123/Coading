 vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>vec;
        int i=0,j=numbers.size()-1,sum=0;
        while(i<j){
        sum=numbers[i]+numbers[j];
        if(sum>target){
            j--;
        }else if(sum<target){
            i++;
        }else{
            vec.push_back(i+1);
            vec.push_back(j+1);
            break;
        }
        }
        return vec;
    }
