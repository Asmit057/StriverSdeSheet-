class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cand1 = -1;
        int cand2 =-1;
        int count1=0;
        int count2 =0;
        int n = nums.size();
        vector <int> v;

        for(int i=0; i<n;i++)
        {
            if(nums[i]==cand1)
            {
                count1++;
            }
            else if(nums[i]== cand2)
            {
                count2++;
            }
            else if(count1==0)
            {
                cand1 = nums[i];
                count1=1;
            }
            else if(count2==0)
            {
                cand2 = nums[i];
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }
        int count3=0;
        int count4=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]== cand1)
            {
                count3++;
            }
            else if(nums[i]== cand2)
            {
                count4++;
            }
        } 
        if(count3>(n/3))
        {
            v.push_back(cand1);
        }
        if(count4>(n/3))
        {
            v.push_back(cand2);
        }
        return v;
    }
};