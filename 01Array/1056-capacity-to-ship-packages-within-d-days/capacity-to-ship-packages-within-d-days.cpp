class Solution {
public:
   bool feasible(vector<int>& weights, int days , int mid)
   {
   int count =1;
   int sum =0;
   int n = weights.size();
   for(int i =0; i<weights.size(); i++)
   {
    if(sum + weights[i] <= mid)
    {
        sum += weights[i];
    }
    else{
        count++;
        sum =weights[i];
    }
   }
   cout<<"count is "<<count<<endl;
   if(count<= days)
   {
    return true;
   }
   else{
    return false;
   }
   }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=INT_MIN;
        int n = weights.size();
        int result =-1;
        int high =0;
        for(int i=0;i<n; i++)
        {
            low = max(low,weights[i]);
            high += weights[i];
        }
        while(low<= high)
        {
            int mid = (low+high)/2;
            bool x = feasible(weights , days , mid);
            cout<<" x is "<<x<<" mid is "<<mid<<endl;
            if(x)
            {
                result = mid;
                high  = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return result;
    }
};