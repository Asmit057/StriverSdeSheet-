class Solution {
public:
   bool feasible(vector<int>& piles , int mid , int h)
   {
    long long count =0; 
    int n = piles.size();
    for(int i=0 ; i<n; i++)
    {
        int x = ceil(piles[i]/double(mid));
        count +=x;
    }
    if(count<= h)
    {
        return true;
    }
    else{
        return false;
    }
   }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low =1;
        int high = INT_MIN;
        int result =-1;
        for(int i=0;i<n; i++)
        {
            high = max(high,piles[i]);
        }
        while(low<=high)
        {
            // here mid denotes the speed range from 1 to max(arr)
            int mid = (low+high)/2;
            // now check that if at this speed it is feasible to eat all banans
            // in given time
             bool x = feasible(piles, mid ,h);
             if(x)
             {
                result = mid;
                high = mid-1;
             }
             else{
                low = mid+1;
             }
        }
        return result;
    }
};