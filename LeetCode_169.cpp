class Solution {
public:
    int majorityElement(vector<int>& nums) {
      //Moore's Voting Algorithm
        int res=0, count=0;
        for(auto num:nums){
            if(count==0){
                res=num;
            }
            if(res!=num){
                count--;
            } else{
                count++;
            }
        }
        return res;
    }
};
