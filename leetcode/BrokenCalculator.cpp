class Solution {
public:

    int brokenCalc(int startValue, int target) {
        //Recursive Method
        //TC O(logTarget)
    //   if(startValue>=target) return startValue-target;
    //   if(target%2==0) return 1+ brokenCalc(startValue,target/2);
    //   return 1 + brokenCalc(startValue,target+1);
    
    //Itrative Method
    int ans=0;
    while(startValue<target){
        ans++;
        if(target%2==0){
            
            target= target/2;
        }else{
            target++;
        }
    }
    return ans+(startValue-target);
    }
};
