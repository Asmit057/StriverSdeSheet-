class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // as we know that there are only two elements which can be
        // appear more than n/3 times bcz (n/3+n/3+n/3) =n
        // so find two candidate elements by using moore voting algo
      int cand1= nums[0];
      int cand2 ;
      int n = nums.size();
      int count=0;
      int count2=0;
      for(int i=0; i<n; i++)
      {
        if(count<=0 &&(nums[i]!=cand2))
        {
            cand1= nums[i];
            count=0;
        }
        if(count2<=0 &&(nums[i]!=cand1))
        {
            cand2= nums[i];
            count2=0;
        }
        if(nums[i]==cand1)
        {
            count++;
        }
       else if(nums[i]==cand2)
       {
        count2++;
       }
       else{
        count--;
        count2--;
       }

      }
      cout<<"count2 "<<count2<<endl;
      cout<<"cand1 "<<cand1<<" cand2 "<<cand2;
      int c1=0;
      int c2=0;
      vector<int> result;
      for(int i=0; i<n; i++)
      {
        if(nums[i]==cand1)
        {
            c1++;
        }
        if(nums[i]==cand2)
        {
            c2++;
        }
      }
      if(c1>n/3)
      {
        result.push_back(cand1);
      }
      if(c2>n/3)
      {
        result.push_back(cand2);
      }
      return result;
    }
};