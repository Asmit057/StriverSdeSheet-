class Solution {
public:
    int majorityElement(vector<int>& nums) {
       // u can use hashmap but space is O(n) amd time(nlogn), so use moore's voting algo
       // arr[4] = [2,2,4,4] count=2, then=0, so no majority element
       // arr[5] = [2,2,4,4,4] count=2,then=0,then =1, so majority element =5
       int count=0;
       int ele = nums[0];
      for(int i=0; i<nums.size(); i++ )
      {
        if(nums[i]== ele)
        {
            count++;
        }
       else{
        count--;
       }
       if(count==0)
       {
        ele = nums[i];
        count++;
       }
      }
     return ele;
    }
};