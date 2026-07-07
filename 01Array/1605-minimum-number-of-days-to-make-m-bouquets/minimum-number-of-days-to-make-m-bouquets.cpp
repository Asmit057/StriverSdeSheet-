class Solution {
public:
   bool feasible(vector<int>& bloomDay, int m, int k, int mid)
   {
    int n = bloomDay.size();
    int count =0;
    int countfl =0;
    for(int i=0 ; i<n; i++)
    {
        if(bloomDay[i]<=mid)
        {
            countfl++;
        }
        else{
            count += countfl/k;
            countfl =0;
        }
       // cout<<"count is "<<count<<endl;
    }
    count += countfl/k;
    if(count>=m)
    {
        return true;
    }
    else{
        return false;
    }
   }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n =  bloomDay.size();
        int low =0;
        int result = -1;
        int high = INT_MIN;
        for(int i=0; i<n; i++)
        {
            high = max(high, bloomDay[i]);
        }
        while(low<=high) // as days are sorted and flower count will always increase
        {
            int mid = (low+high)/2;
            bool x = feasible(bloomDay, m,k,mid);
           // cout<<"x ia "<<x<<endl;
            if(x)
            {
                result = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return result;
    }
};