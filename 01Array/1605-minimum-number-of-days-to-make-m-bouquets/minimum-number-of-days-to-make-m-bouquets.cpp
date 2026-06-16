class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n  = bloomDay.size();
        long long x = 1LL*m*k;
         if(x>n)
         {
             return -1;
         }
        int day1 = INT_MAX;
        int lstDay = INT_MIN;
        int result =INT_MAX;
        for(int i=0; i<n; i++)
        {
            day1 = min(bloomDay[i],day1);
            lstDay = max(bloomDay[i],lstDay);
        }
        while(day1<=lstDay)
        {
            int mid = (day1+lstDay)/2;
            int count=0;
            int nobqts=0;
            for(int i=0; i<n; i++)
            {
                if(bloomDay[i]<=mid)
                {
                    count++;
                }
                else{
                   int y = (count/k);
                    nobqts += y;
                    count=0;;
                }
            }
            nobqts += count / k;

            if(nobqts>=m)
            {
                 result = min(mid,result);
                lstDay = mid -1;
            }
            else{
               day1 = mid+1;
            }
        }
        return result;
    }
};