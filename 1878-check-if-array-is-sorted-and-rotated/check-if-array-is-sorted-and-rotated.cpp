class Solution {
public:
    bool check(vector<int>& nums) {
        // if the array was originally sorted then rotated(means shifting in circular manner) we know that
        // one half is always sorted
        bool flag1 = true;
        bool flag = true;
        int count =1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1]>nums[i]){
            flag1 = false;
            count++;
            }
            
        }
        if(count == 2 && count==nums.size())
        {
        return true;
        }
        else if(flag1 == true || count==nums.size())
        {
            return flag1;
        }
        else{
        int mid = nums.size()/2;
        int i=1;
        if(nums[0]<nums[nums.size()-1])
        {
            return false;
        }
        else{
        while(i<=mid)
        { 
            if(nums[i-1]>nums[i])
            {
                flag = false;
            }
            i++;
        }
        if(flag == true)
        {
            return true;
        }
       
        else{
             flag = true;
            while(i<nums.size())
        {
            if(nums[i-1]>nums[i])
            {
                flag = false;
            }
            i++;
        }
        }
        }
        }
        return flag;

    }
};