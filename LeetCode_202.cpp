class Solution {
public:
    bool isHappy(int n) {
        int sum=0,rem;
        while(1){
            while(n>0){
                rem=n%10;
                sum+=pow(rem,2);
                n=n/10;
            }
            if(sum==1 || sum/10==0&&sum!=7){
                break;
            }
            n=sum;
            sum=0;
       }
       if(sum==1) return true;
       else return false;
    }
};
